#include<stdio.h>
#include<math.h>


int main(){

    int n,count=0,sum=0,x,temp;
    printf("enter a number:\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0 && temp>0){
        temp=temp/10;
        count++;
        
       
    }
    printf("number has %d digits.",count);
    temp=n;
    while(temp!=0 && temp>0){

        x=temp%10;
        sum=sum+(int)round(pow(x,count));
        temp=temp/10;
    }
    printf("\nsum:%d\n",sum);

    if(sum==n){
        printf("armstrong number\n.");
    }
    else{
        printf("not armstrong number.");
    }

    return 0;
}