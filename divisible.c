#include<stdio.h>
int main(){
    int n;
    printf("Enter the a number");
    scanf("%d",&n);
    if((n%3)==0 && n%5==0){
        printf("true");
    }
    else{
        printf("false");
    }
}