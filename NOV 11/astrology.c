#include<stdio.h>
int main(){
    char name[100];
    int sum=0;
    printf("Enter a name: ");
    fgets(name,sizeof(name),stdin);
    for(int i=0;name[i]!='\0';i++){
        if(name[i]!='\n'){
            printf("ASCII value of '%c'=%d\n",name[i],name[i]);
            sum+=name[i];
        }
    }
    printf("Total sum of ASCII values:%d\n",sum);
    return 0;
}
    