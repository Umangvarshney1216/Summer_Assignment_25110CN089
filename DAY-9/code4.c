//program for hollow square pattern

#include <stdio.h>
int main(){
    int i, j, num;
    printf("enter number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        printf("\n");
        for(j=1; j<=num; j++){
            if(i==2 || i==3 || i==4){
                if (j==1 || j== num){
                    printf("*");
                }   
                else{
                    printf(" ");
                }      
            }
            else{
                printf("*");
            }
        }
    }
    return 0;
}