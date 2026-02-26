#include <stdio.h>
#include<string.h>

int main() {
    
    char str1[50],str2[50],str3[50],temp;
    printf("enter string1:\n");
    gets(str1);
    int a = 5;

    printf("enter string2:\n");
    gets(str2);
    
    int i,j;

    

    for(i=0;str1[i]!='\0';i++){

    }
    for(j=0;str2[j]!='\0';j++,i++){
        str1[i]=str2[j];
        
    }
    str1[i]='\0';
    

    

    // printf("%s",strcat(str1,str2));
    
    printf("%s\n",str1);
    printf("%d\n",a);
    
    
    /*trying using pointers
    char* x = str1;
    char* y = str2;
    int i=0,j=0;

    while(*x != '\0'){
        x++;
        
    
    }
    while(*y !='\0')
    { 

        *x = *y;
        x++;
        y++;


    }
    *x = '\0';
    printf("%s",str1);
    */
   
    
    
    
    
    
    
    


    return 0;
}