/*wap to read and display records of 10 students using structure.*/

#include <stdio.h>

typedef struct student{
    char name[50];
    int roll;
    int marks;
}stu;

int main() {
    
    stu s[10];
    int i;

    for(i=0;i<5;i++){
        

        printf("enter the name of student%d:\n",i);
        getchar();
        fgets(s[i].name,sizeof(s[i].name),stdin);
        
        printf("enter the roll number:\n");
        scanf("%d",&s[i].roll);
        printf("enter the marks in english:\n");
        scanf("%d",&s[i].marks);
    }
    

    printf("-------------------------\n");
    for(i=0;i<5;i++){
        printf("name%d:%s\n",i,s[i].name);
        printf("roll%d:%d\n",i,s[i].roll);
        printf("mark:%d\n",s[i].marks);
    }
    return 0;
}