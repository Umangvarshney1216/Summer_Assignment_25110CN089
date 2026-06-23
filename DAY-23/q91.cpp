//program to check anagram strings


#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams.";
        return 0;
    }
    int freq[256] = {0};
    for (int i = 0; i < str1.length(); i++) {
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Strings are not anagrams.";
            return 0;
        }
    }
    cout << "Strings are anagrams.";
    return 0;
}