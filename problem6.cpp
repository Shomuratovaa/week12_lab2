#include <iostream>
using namespace std;

bool is_in(const int* arr1, const int* arr2, int size1, int size2) {
    const int *p1 = arr1;

    for (int i = 0; i < size1; i++, p1++) {
        const int *p2 = arr2;
        bool found = false;

        for (int j = 0; j < size2; j++, p2++) {
            if (*p1 == *p2) {
                found = true;
                break;
            }
        }

        if (!found) return false;
    }
    return true;
}
int main() {
    int size1, size2;
    cout<<"Enter the size of first array: ";
    cin >> size1;
    int arr1[size1];
    cout<<"Enter the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    cout<<"Enter the size of second array:";
    cin >> size2;
    int arr2[size2];
    cout<<"Enter the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    cout << is_in(arr1, arr2, size1, size2) << endl;

    return 0;
}