//program to find common elements


#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter size of second array: ";
    cin >> m;
    int b[m];
    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    cout << "Common elements are: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                cout << a[i] << " ";
                break;
            }
        }
    }
    return 0;
}