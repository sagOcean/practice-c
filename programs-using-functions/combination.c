#include <stdio.h>
# define false 's'

int combination(int n,int r){

    int fact1 = 1,fact2 = 1,fact3 = 1;

    int i;

    if(n == 0 || r==0){
        return 1;
    }
    else if(n<0 || r>n){
        return false ;
    }
    else{
        for(i=1;i<=n;i++){
        fact1 = fact1 * i;
    }
    for(i=1;i<=(n-r);i++){
        fact2 = fact2 * i;
    }
    for(i=1;i<=r;i++){
        fact3 = fact3 * i;
    }

    return fact1/(fact2 * fact3);
    }

    

}

int main() {

    int n,r,x;
    printf("enter two numbers for combination: ");
    scanf("%d %d",&n,&r);

    

    x = combination(n,r);

    if(x!=false){
        printf("combination:%d",x);
    }
    else{
        printf("invalid inputs provided.");
    }

    
    
    return 0;
}