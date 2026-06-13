// program to find sum and average of array


#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int array[n];
    int i, sum=0;
    float avg=0;
    for(i=0; i<n; i++){
        printf("Enter array[%d]:",i);
        scanf("%d",&array[i]);
        sum+= array[i];
    }
    avg= sum/(float)n;
    printf("the required sum is: %d\n",sum);
    printf("the required average is: %.3f",avg);
    return 0;
}