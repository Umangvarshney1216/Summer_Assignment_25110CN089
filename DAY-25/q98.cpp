//program to find common characters in strings


#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    cout << "Common characters: ";

    for (int i = 0; str1[i] != '\0'; i++) {
        bool found = false;

        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << str1[i] << " ";
        }
    }

    return 0;
}