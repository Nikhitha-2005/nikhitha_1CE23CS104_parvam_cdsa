#include<stdio.h>
int main(){
    int n,i,min;
    printf("enter the number of elments in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimun element in the array is: %d\n",min);
    return 0;
}