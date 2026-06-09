//program for reverse number triangle

#include <stdio.h>
int main(){
    int i, j, num;
    printf("enter number:");
    scanf("%d",&num);
    for(i=num; i>=1; i--){
        printf("\n");
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
    }
    return 0;
}