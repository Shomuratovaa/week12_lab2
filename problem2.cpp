#include <iostream>
using namespace std;

int evenCount(const int*a, int size) {
    int count=0;
    const int*p=a;

    for (int i=0; i<size; i++) {
        if (*p%2==0) {
            count++;
        }
        p++;
    }
    return count;
}

int main() {
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int* arr= new int[size];
    cout<<"Enter numbers: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<evenCount(arr,size);

    delete[] arr;
    return 0;
}