//program for reverse star pattern

#include <stdio.h>
int main(){
    int i, j, num;
    printf("enter number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        printf("\n");
        for(j=num; j>=i; j--){
            printf("*");
        }
    }
    return 0;
}