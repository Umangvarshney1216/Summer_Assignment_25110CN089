// program to count even and odd elements of array


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
    int count_e=0, count_o=0;
    for(i=0; i<n; i++){
        if(array[i] % 2 == 0){
            count_e +=1;
        }
        else{
            count_o +=1;
        }
    }
    printf("there are total %d even numbers\n",count_e);
    printf("there are total %d odd numbers\n",count_o);
    return 0;
}