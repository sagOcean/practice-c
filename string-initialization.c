#include <stdio.h>

int main() {
    char city[9]={'n','e','w',' ','y','o','r','k'};
    int i=0;

    while(city[i]!='\0'){
        
        printf("%c",city[i]);
        i++;
    }
    return 0;
}