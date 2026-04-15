/*wap to print the name,faculty,roll and dob(day,month,year) of n students and only print the results of the
student whose faculty is bca.*/


//this code is an example of nested structure usage. i have just done it for 5 inputs but  you can do how much you want

#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[30];
    char faculty[30];
    struct {   // nested structure
        int dd;
        int mm;int yy;
    }date;
};

int main() {

    struct student s[5];
    int i;

    for(i=0;i<5;i++){
        printf("enter the name:\n");
        scanf("%s",s[i].name);

        printf("enter roll:\n");
        scanf("%d",&s[i].roll);

        printf("enter faculty:\n");
        scanf("%s",s[i].faculty);

        printf("enter year of birth:\n");
        scanf("%d",&s[i].date.yy);

        printf("enter month of birth:\n");
        scanf("%d",&s[i].date.mm); //inside s[i] goto struct date and access mm

        printf("enter day of birth:\n");
        scanf("%d",&s[i].date.dd);
    }
    printf("BCA students record only:\n");
    for(i=0;i<5;i++){
        if(strcmp(s[i].faculty,"BCA")==0 || strcmp(s[i].faculty,"bca")==0){
            printf("---------------\n");
            printf("%s\n",s[i].name);
            printf("%d\n",s[i].roll);
            printf("%s\n",s[i].faculty);
            printf("DOB:%d/%d/%d\n",s[i].date.dd,s[i].date.mm,s[i].date.yy);
            printf("----------------\n");
        }
    }
    
    return 0;
}