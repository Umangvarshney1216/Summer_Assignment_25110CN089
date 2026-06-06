#include <stdio.h>
int main() {
    int num, n, i;
    long long result = 1;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        result = result * num;
    }
    printf("%d raised to the power %d = %lld", num, n, result);
    return 0;
}