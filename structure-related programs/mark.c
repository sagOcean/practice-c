/*what i need to change in this program is that to change int temp into struct stu temp*/


#include <stdio.h>
struct student{
    char name[50];
    int roll;
    int s1,s2,s3;
    int total;
};

int main() {
    
    int i,j;
    struct student stu[3];
    int totals_array[3];

    for(i=0;i<3;i++){
        
        printf("enter your name:\n");
        scanf(" %[^\n]s",stu[i].name);
        printf("roll:\n");
        scanf("%d",&stu[i].roll);
        printf("subject1:\n");
        scanf("%d",&stu[i].s1);
        printf("subject2:\n");
        scanf("%d",&stu[i].s2);
        printf("subject3:\n");
        scanf("%d",&stu[i].s3);
        stu[i].total = stu[i].s1+stu[i].s2+stu[i].s3;
        totals_array[i] = stu[i].total;
        
    }
    for(i=0;i<3;i++){
        printf("name:%s\n",stu[i].name);
        printf("roll:%d\n",stu[i].roll);
        printf("s1:%d\n",stu[i].s1);
        printf("s2:%d\n",stu[i].s2);
        printf("s3:%d\n",stu[i].s3);
        printf("-------------\n");
    }



    for(i=0;i<3;i++){
        printf("%d\t",totals_array[i]);
    }
    int n = sizeof(totals_array)/sizeof(int);
    int temp;

    for(i=0;i<n;i++){// i need to make changes here
        for(j=0;j<n-i-1;j++){
            if(totals_array[j]>totals_array[j+1])
            {
                temp = totals_array[j];
                totals_array[j]=totals_array[j+1];
                totals_array[j+1]=temp;
            }
            

        }
    }
    printf("sorted marks:\n");
    for(i=0;i<3;i++){
        printf("%d\t",totals_array[i]);
    }


    return 0;
}
/*#include <stdio.h>

struct student{
    char name[50];
    int roll;
    int s1,s2,s3;
    int total;
};

int main() {
    int i, j;
    struct student stu[3];
    struct student temp; // Notice temp is now a 'struct student' to swap entire records

    // 1. Read records
    for(i = 0; i < 3; i++){
        printf("enter your name:\n");
        scanf(" %[^\n]s", stu[i].name);
        printf("roll:\n");
        scanf("%d", &stu[i].roll);
        printf("subject1:\n");
        scanf("%d", &stu[i].s1);
        printf("subject2:\n");
        scanf("%d", &stu[i].s2);
        printf("subject3:\n");
        scanf("%d", &stu[i].s3);
        
        // Calculate total
        stu[i].total = stu[i].s1 + stu[i].s2 + stu[i].s3;
    }

    // 2. Sort the structures based on total marks (Ascending order)
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3 - i - 1; j++){
            // Compare the totals of adjacent students
            if(stu[j].total > stu[j+1].total) {
                // Swap the ENTIRE student record
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }

    // 3. Print the sorted records
    printf("\n--- Student Records (Sorted by Total Marks Ascending) ---\n");
    for(i = 0; i < 3; i++){
        printf("Name: %s\n", stu[i].name);
        printf("Roll: %d\n", stu[i].roll);
        printf("s1: %d\n", stu[i].s1);
        printf("s2: %d\n", stu[i].s2);
        printf("s3: %d\n", stu[i].s3);
        printf("Total Marks: %d\n", stu[i].total);
        printf("-----------------------------\n");
    }

    return 0;
}*/