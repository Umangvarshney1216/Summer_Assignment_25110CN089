//program to rotate array left


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; i++){
        cout<<"enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"the entered array is:"<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    int first= arr[0];
    for(i=0; i<=n-1; i++){
        arr[i]= arr[i+1];
    }
    arr[n-1]= first;
    cout<<"\nthe rotated array is:"<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}