//program to check matrix is symmetric or not


#include <iostream>
using namespace std;
int main(){
    int r1, c1;
    cout<<"enter no of rows and columns of matrix A:";
    cin>>r1>>c1;
    if(r1==c1){
        cout<<"condition of symmetric and skew symmetric can be checked\n";
        int A[r1][c1], i, j;
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                cout<<"enter A["<<i<<"]["<<j<<"]=";
                cin>>A[i][j];
            }
        }
        cout<<"the matrix A is\n";
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                cout<<A[i][j]<<"\t";
            }
            cout<<endl;
        }
        bool symmetric = true;
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                if(A[i][j] != A[j][i]){
                    symmetric = false;
                    break;
                }
            }
        }
        if(symmetric){
            cout << "Matrix is Symmetric";
        }
        else{
            cout << "Matrix is Not Symmetric";
        }
    }
    else{
        cout<<"for a matrix to be symmetric or skew symmetric, it must be sqaure matrix";
    }
    return 0;
}