#include <stdio.h>
int main(){
    int i,num,fact=1;
    printf("enter the number whose factorial you want:");
    scanf("%d",&num);
    for (i=num;i>1;i--){
        fact=fact*i;
    }
    printf("the factorial of %d is %d",num,fact);
    return 0;
}