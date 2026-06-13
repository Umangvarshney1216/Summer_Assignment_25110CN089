// program to input and display an array


#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int array[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter array[%d]:",i);
        scanf("%d",&array[i]);
    }
    printf("the array is:\n");
    printf("{\t");
    for(i=0; i<n; i++){
        printf("%d\t",array[i]);
    }
    printf("}\n");
    return 0;
}