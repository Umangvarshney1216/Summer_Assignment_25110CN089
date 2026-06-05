#include <stdio.h>
int main(){
    int num, i, sum=0;
    printf("enter number:");
    scanf("%d",&num);
    printf("the perfect factors are :\n");
    for (i=1; i<num; i++){
        if (num%i==0){
            printf("%d\t",i);
            sum= sum+i;
        }
    }
    if (sum== num){
        printf("\n%d is a perfect number",num);
    }
    else{
        printf("\n%d is not a perfect number",num);
    }
}