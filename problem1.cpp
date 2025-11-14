#include <iostream>
using namespace std;

int main() {
    const int sz = 10;
    float *ptr,arr[sz];
    ptr = arr;

    cout<<"Enter 10 grades: ";
    while (ptr< arr + sz) {
        cin>>*ptr;
        *ptr *= 0.3;
        ptr++;
    }
    ptr--;
    while (ptr>=arr) {
        cout<<*ptr<<" ";
        ptr--;
    }
    return 0;
}