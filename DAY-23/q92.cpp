//program to find maximum occurring character


#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;
    }
    char maxChar;
    int maxFreq = 0;
    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }
    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq;
    return 0;
}