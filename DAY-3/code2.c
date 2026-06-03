#include <stdio.h>
int main() {
    int start, end, i, j, count;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i <= 1)
            continue;
        count = 0;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                count++;
            }
        }
        if(count == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}