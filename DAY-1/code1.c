#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the number upto which you want the sum:");
    scanf("%d",&n);
    for (i=0; i<=n; i++){
        sum= sum+i;
    }
    printf("the required sum is %d",sum);
    return 0;
}