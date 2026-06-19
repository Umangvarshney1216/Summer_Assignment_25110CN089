//program to transpose matrix

#include <iostream>
using namespace std;
int main(){
    int r1, c1;
    cout<<"enter no. of rows and columns of matrix A:";
    cin>>r1>>c1;
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
        cout<<"the transpose matrix of matrix A is\n";
        for(i=0; i<c1; i++){
            for(j=0; j<r1; j++){
                cout<<A[j][i]<<"\t";
            }
            cout<<endl;
        }
        return 0;
}