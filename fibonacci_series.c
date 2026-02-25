
// 0 1 1 2 3 5 8 13 21.......

#include<stdio.h>


int main(){

    int a=0,b=1,c,n,i;
    printf("how many numbers do you want in fibonacci series?:\n");
    scanf("%d",&n);

    printf("%d\t %d\t",a,b);  //two pre-determined numbers
    

    for(i=3;i<=n;i++) //loop starts at 3 because 2 numbers are already printed
    {

        c=a+b;
        printf("%d\t",c); //prints the sum
        a=b;
        b=c;

    }



    return 0;
}