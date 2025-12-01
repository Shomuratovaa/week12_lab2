#include <iostream>
using namespace std;

int main() {
    const int SIZE=10;
    float *ptr, arr[SIZE];
    ptr=arr;
    cout<<"Enter 10 grades: ";
    for (int i=0; i<10; i++) {
        cin>>arr[i];
        *(ptr+i)=arr[i]*0.3;
    }
    for (int i=SIZE-1; i>=0; i--) {
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}
