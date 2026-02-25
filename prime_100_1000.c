
#include<stdio.h>

int main(){
    int i,j,isPrime;

    for(i = 100; i <= 1000; i++) //this loop prints out numbers
    {
    isPrime = 1;  // assume i is prime

        for(j = 2; j <= i/2; j++) //this number prints out the numbers required to divide i
        {
        if(i % j == 0) 
        {
            isPrime = 0;  // not prime
            break;
        }
        }

    if( isPrime== 1) {
        printf("%d\n", i);
    }
}


// another method of doing the same program
/*
for(i = 100; i <= 1000; i++) //this loop prints out numbers
        {
        

            for(j = 2; j <= i/2; j++) //this number prints out the numbers required to divide i
            {
                if(i % j == 0) 
                {
                
                    break;
                }
            }

        if( i%j!=0) {
            printf("%d\n", i);
        }
    }


*/
    

    return 0;
}












