//program to merge arrays


#include <iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter no of elements in array A:";
    cin>>n1;
    int A[n1], i;
    for(i=0; i<n1; i++){
        cout<<"enter A["<<i<<"]:";
        cin>>A[i];
    }
    for(i=0; i<n1; i++){
        cout<<A[i]<<"\t";
    }
    int n2;
    cout<<"\nenter no of elements in array B:";
    cin>>n2;
    int B[n2];
    for(i=0; i<n2; i++){
        cout<<"enter B["<<i<<"]:";
        cin>>B[i];
    }
    for(i=0; i<n2; i++){
        cout<<B[i]<<"\t";
    }
    int C[n1+n2];
    for(i=0; i<n1; i++){
        C[i]= A[i];
    }
    for(i=0; i<n1+n2; i++){
        C[i+n1]= B[i];
    }
    cout<<"\nthe merged array is:\n";
    for(i=0; i<n1+n2; i++){
        cout<<C[i]<<"\t";
    }
    return 0;
}