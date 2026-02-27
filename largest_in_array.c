#include<stdio.h>

int main(){

    int largest[]={3,5,6,8,60,5},i;
    const int N=sizeof(largest)/sizeof(int);

    int greatest=largest[0];

    for(i=0;i<N;i++){

        if(largest[i]>greatest){
            greatest=largest[i];
        }
        
    }
    printf("greatest num:%d",greatest);

    return 0;
}