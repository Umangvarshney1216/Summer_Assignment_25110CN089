//program to union of arrays


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
    int c[n + m];
    int k = 0;
    for(int i = 0; i < n; i++){
        int found = 0;
        for(int j = 0; j < k; j++){
            if(a[i] == c[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            c[k] = a[i];
            k++;
        }
    }
    for(int i = 0; i < m; i++){
        int found = 0;
        for(int j = 0; j < k; j++){
            if(b[i] == c[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            c[k] = b[i];
            k++;
        }
    }
    cout << "Union of arrays: ";
    for(int i = 0; i < k; i++){
        cout << c[i] << " ";
    }
    return 0;
}