#include <iostream>
using namespace std;

void swap(int* arr1, int* arr2, int size) {
    int temp;
    for (int i=0; i<size; i++) {
        temp=*arr1;
        *arr1=*arr2;
        *arr2=temp;
        arr1++;
        arr2++;
    }
}

int main() {
    int sz;
    cout<<"Enter the size of the array: "; cin>>sz;
    int arr1[sz];
    int arr2[sz];
    cout<<"Enter the elements of the first array: ";
    for (int i=0; i<sz; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: ";
    for (int i=0; i<sz; i++) {
        cin>>arr2[i];
    }
   cout<<endl;

    return 0;
}
