#include <stdio.h>
int main(){
    int i,num;
    printf("enter the number whose table you want:");
    scanf("%d",&num);
    printf("the table you want is");
    for (i=1; i<=10; i++){
        printf("\n%d * %d = %d",num,i,num*i);
    }
    return 0;
}