#include <stdio.h>
int main(){
    int i, j, num;
    printf("enter the number of rows:");
    scanf("%d",&num);
    for (i=1; i<=num; i++){
        for(j=1; j<=num-i; j++){
            printf(" ");}
        
        for(j=0; j<i; j++){
            printf("%c",'A'+j);}

        for(j=i-2; j>=0; j--){
            printf("%c",'A'+j);}

        printf("\n");
        
    }
    return 0;
}