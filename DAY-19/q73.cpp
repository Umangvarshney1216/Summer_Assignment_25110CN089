//program to add matrices


#include <iostream>
using namespace std;
int main(){
    int r1, c1;
    cout<<"enter no. of rows and columns of matrix A:";
    cin>>r1>>c1;
    int r2, c2;
    cout<<"enter no. of rows and columns of matrix B:";
    cin>>r2>>c2;
    if(r1==r2 && c1==c2){
        cout<<"addition is possible"<<endl;
        int A[r1][c1], i, j;
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                cout<<"enter A["<<i<<"]["<<j<<"]=";
                cin>>A[i][j];
            }
        }
        cout<<"Matrix A is\n";
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                cout<<A[i][j]<<"\t";
            }
            cout<<endl;
        }
        int B[r2][c2];
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                cout<<"enter B["<<i<<"]["<<j<<"]=";
                cin>>B[i][j];
            }
        }
        cout<<"Matrix B is\n";
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                cout<<B[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"Matrix C is\n";
        int C[r1][c1];
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                C[i][j]= A[i][j]+B[i][j];
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"addition is not possible";
    }
    return 0;
}