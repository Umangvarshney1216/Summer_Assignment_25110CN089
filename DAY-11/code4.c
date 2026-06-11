#include <stdio.h>
int fact(int n){
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int num1, result;
    printf("enter the number:");
    scanf("%d",&num1);
    result= fact(num1);
    printf("factorial= %d",result);
    return 0;
}