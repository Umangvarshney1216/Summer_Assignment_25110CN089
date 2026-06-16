//program to find missing number in array


#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter " << n - 1 << " elements: ";
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }
    int expectedSum = n * (n + 1) / 2;
    int missingNumber = expectedSum - actualSum;
    cout << "Missing number is: " << missingNumber;
    return 0;
}