#include <stdio.h>
int main(){
    int num, i, sum=0;
    printf("enter number:");
    scanf("%d",&num);
    printf("the factors are :\n");
    for (i=1; i<=num; i++){
        if (num%i==0){
            printf("%d\t",i);
        }
    }
}