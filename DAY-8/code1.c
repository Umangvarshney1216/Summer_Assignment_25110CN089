//program for half pyramid pattern 


#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter how many rows and columns do you want? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("*");
        }
    }
    return 0;
}