//program to sort words by length


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char words[5][50];

    cout << "Enter 5 words:\n";
    for (int i = 0; i < 5; i++) {
        cin >> words[i];
    }

    char temp[50];

    // Sort words by length
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < 5; i++) {
        cout << words[i] << endl;
    }

    return 0;
}