//program to find pair with given sum


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int A[n], i, j;
    for(i=0; i<n; i++){
        cout<<"enter A["<<i<<"]:";
        cin>>A[i];
    }
    cout<<"the array A is:"<<endl;
    for(i=0; i<n; i++){
        cout<<A[i]<<"\t";
    }
    int sum;
    cout<<"\nenter the sum you want:";
    cin>>sum;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(A[i]+A[j]==sum){
                cout<<"("<<A[i]<<","<<A[j]<<")"<<"\t";
            }
        }
    }
    return 0;
}