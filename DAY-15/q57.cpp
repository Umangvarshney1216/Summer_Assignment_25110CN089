//program to print reverse array



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
    cout<<"\nthe reverse array is:"<<endl;
    for(i=n-1; i>=0; i--){
        cout<<arr[i]<<"\t";
    }
    return 0;
}