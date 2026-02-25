#include<stdio.h>



int main(){

    int n,sum=0,i;
    printf("enter the number upto which you want sum:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        sum=sum+i;
    }
    printf("sum:%d",sum);
    

    return 0;
}