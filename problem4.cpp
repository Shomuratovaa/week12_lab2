#include <iostream>
using namespace std;

void sumArrays(const double*arr1, const double* arr2, double*sum, int size) {
    const double*p1=arr1;
    const double*p2=arr2;
    double* ps=sum;

    for (int i=0; i<size; i++) {
        *ps=*p1+*p2;
        p1++;
        p2++;
        ps++;
    }
}

int main() {
    int size;
    cout<<"Enter size of arrays: ";
    cin>>size;

    double*arr1=new double[size];
    double*arr2=new double[size];
    double* sum=new double[size];

    cout<<"Enter the elements of array1: ";
    for (int i=0; i<size; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of array2: ";
    for (int i=0; i<size; i++) {
        cin>>arr2[i];
    }

    sumArrays(arr1, arr2, sum, size);

    for (int i=0; i<size; i++) {
        cout<<sum[i]<<" ";
    }
    delete[]arr1;
    delete[]arr2;
    delete[]sum;

    return 0;

}