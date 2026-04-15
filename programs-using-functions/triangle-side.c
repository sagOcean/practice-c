#include <stdio.h>
#define w -3

#define y -1

int valid(int a,int b,int c)
{
    if(a==0 || b==0||c==0){
        return w;
    }
    if(a+b>c && b+c>a && a+c>b){
        return y;
    }
    
}

int main() {
    int a,b,c,x;
    printf("enter the three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    x = valid(a,b,c);

    if(x == y){
        printf("%d,%d and %d are valid sides.",a,b,c);
    }
    else if(x == w){
        printf("you have entered invalid side length.");
    }
    else{
        printf("%d,%d and %d are not valid sides.",a,b,c);
    }

    
    return 0;
}