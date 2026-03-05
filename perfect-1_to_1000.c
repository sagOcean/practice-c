#include<stdio.h>


int main(){

    int n,i,sum,j;
    // printf("enter a number:\n");
    // scanf("%d",&n);

    for(i=1;i<=1000;i++) //this generates numbers from 1 to 1000
    {
        sum=0;

        for(j=1;j<=(i/2);j++)  // ex: if i=5,j will be from 1 to (5/2=2.5~2)
        {

            if(i%j==0){
                sum=sum+j;
            }
           
            

        }
        if(sum==i)
        {
            printf("%d\t",i);
        }
        
    }
    

    return 0;
}