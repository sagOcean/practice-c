#include<stdio.h>


int main(){

    int n,i;
    printf("enter a number:\n");
    scanf("%d",&n);

    for(i=1;n!=1;i++){
        
        if(n%2==0){
            
            n=n/2;
            
            
            
        }
        else{
           
            n=3*n +1;
            
            
        }
        printf("%d\n",n);
      
        
        
        
    }

    return 0;
}