#include<stdio.h>


int main(){

    int n,i,x,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);

    for(i=1;i<=(n/2);i++){

        if(n%i==0){
            sum=sum+i;
        }
        
    }
    if(sum==n){
        printf("perfect.");
    }
    else{
        printf("not perfect.");
    }

    return 0;
}