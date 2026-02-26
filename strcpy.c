#include <stdio.h>
#include<string.h>

int main() {
    //strcpy codee
    char name1[50],name2[50];

    printf("enter the string:\n");
    gets(name1);

    int i;
    char temp;
    for(i=0;name1[i]!='\0';i++){
        name2[i]=name1[i];
    }
    name2[i]='\0';
    puts(name2);
    
   /* strcpy using pointers
   
   char name1[50],name2[50];
    char* x;char* y;

    x = name1;
    y = name2;
    int i=0;

    printf("enter the string:\n");
    gets(name1);

    while(*x!='\0'){
        *y = *x;
        x++;
        y++;
        i++;
    }
    name2[i]='\0';

    puts(name2);
    */
   
    
    return 0;
}