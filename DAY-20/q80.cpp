//program to find column wise sum


#include <iostream>
using namespace std;
int main(){
    int r1, c1;
    cout<<"enter no of rows and columns of matrix A:";
    cin>>r1>>c1;
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
        int sum;
        for(j=0; j<c1; j++){
            sum =0;
            for(i=0; i<r1; i++){
                sum += A[i][j];
            }    
            cout<<"the sum of column "<<j+1<<" is "<<sum;
            cout<<endl;
        }
    return 0;
}