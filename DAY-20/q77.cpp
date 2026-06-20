//program to multiply matrices


#include <iostream>
using namespace std;
int main(){
    int r1, c1;
    cout<<"enter no of rows and columns of matrix A:";
    cin>>r1>>c1;
    int r2, c2;
    cout<<"enter no of rows and columns of matrix B:";
    cin>>r2>>c2;
    if(r2==c1){
        cout<<"matrix multiplication is possible\n";
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
        int B[r2][c2];
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                cout<<"enter B["<<i<<"]["<<j<<"]=";
                cin>>B[i][j];
            }
        }
        cout<<"the matrix B is\n";
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                cout<<B[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"the matrix C is\n";
        int C[r1][c2], k;   
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                C[i][j]=0;
                for(k=0; k<r2; k++){
                    C[i][j]+= A[i][k]*B[k][j];
                }
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"matrix multiplication is not possible";
    }
    return 0;
}