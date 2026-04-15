#include <stdio.h>

int absolute(int x){
    if(x<0){
        x = -x;

    }
    return x;
}

int main() {
    int n,y;
    printf("enter a number: ");
    scanf("%d",&n);
    y = absolute(n);

    printf("\nabsolute value of %d is %d.",n,y);

    return 0;
}