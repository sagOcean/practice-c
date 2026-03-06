#include <stdio.h>

int main() {
    char str[50];
    char* x = str;
    int count=0;

   printf("enter string:\n");
   gets(str);

   while(*x!='\0'){
    count++;
    x++;
   }
   printf("%d",count);

    return 0;
}