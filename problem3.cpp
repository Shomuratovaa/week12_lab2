#include <iostream>
using namespace std;

bool is_mirrored(const int* a, const int* b, int size) {
    const int* ptr=b+size-1;
    for (int i=0; i<size; i++) {
        if (*a!=*ptr) {
            return false;
        }
        a++;
        ptr--;
    }
    return true;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"Enter first array elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: ";
    for (int i=0; i<n; i++) {
        cin>>arr2[i];
    }

    cout<<is_mirrored(arr1, &arr2[n-1], n);

    return 0;
}
