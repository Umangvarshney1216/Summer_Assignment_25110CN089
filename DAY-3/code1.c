#include <stdio.h>
int main(){
    int num,i,count=0;
    printf("enter number:");
    scanf("%d",&num);
    for (i=2; i<num; i++){
        if (num%i==0){
            count+=1;
        }
        else{
            count+=0;
        }
    }
    if (count==0){
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
    }
    return 0;
}