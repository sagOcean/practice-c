#include<stdio.h>


int main(){

    int n,count=0;
    printf("enter your number:\n");
    scanf("%d",&n);

    while(n%10!=0){
        count++;
        n=n/10;
    }
    printf("%d",count);

    return 0;
}