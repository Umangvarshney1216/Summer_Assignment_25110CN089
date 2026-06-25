//program to sort names alphabetically


#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char names[5][50];
    cout << "Enter 5 names:\n";
    for (int i = 0; i < 5; i++) {
        cin.getline(names[i], 50);
    }
    char temp[50];
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < 5; i++) {
        cout << names[i] << "\t";
    }
    cout<<endl;
    return 0;
}