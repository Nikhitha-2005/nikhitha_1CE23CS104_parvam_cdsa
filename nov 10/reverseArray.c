#include<stdio.h>
void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        reverseArray(arr,n);
        printf("Reversed array: \n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return 0;
    }

