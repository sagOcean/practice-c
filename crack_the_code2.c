#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch1, ch2, ch3, ch4, pc=0, l=1, sb=0 ,next , a, b, c, d, guess,i;
    Y:
    printf("\nLEVEL %d",l);
    a=printf("\n\nenter the first code: ");
    scanf("%d",&ch1);
    b=printf("the second one: ");
    scanf("%d",&ch2);
    c=printf("third one: ");
    scanf("%d",&ch3);
    d=printf("fourth number: ");
    scanf("%d",&ch4);
        system("cls");
    //level 1
    {
        //code is 5724
        {

        if(ch1==5)
        {
           printf("5");
            pc++;
        }
        else
        {
          printf("\tno");
        }
        if(ch2==7)
        {
          printf("\t7");
            pc++;
        }
        else
        {
           printf("\tno");
        }
        if(ch3==2)
        {
            printf("\t2");
            pc++;
        }
        else
        {
            printf("\tno");
        }
        if(ch4==4)
        {
           printf("\t4");
            pc++;
        }
        else
        {
          printf("\tno");
        }
        if(pc==4)
        {
            printf("\n\nlevel 1 cleared");
            goto X;
        }
        else
        {
            printf("\nwrong answer\n");
            sb++;
            pc=0;
            goto Y;
        }
      }
    }
      //level 2
      X:
       printf("\n\ndo you want to play next level type 1 to play: ");
       scanf("%d",&next);
    
    if(next==1)
    {
        sb--;
        int arr[10]={5,7,25,10,75,82,55,23,69,61};
        system("cls");
        Z:
        for(i=0;i<10;i++)
        {
        printf("%d\t",arr[i]);
        
        }
        printf("\nthere is only one safe number in this list just guess that and you win");
        printf("\n\ntype a number you think is safe: ");
        scanf("%d",&guess);
        if(guess==69)
        {
            printf("\n\nlevel 2 cleared");
            printf("\nTotal mistakes made: %d", sb);
        }
        else
        {
            system("cls");
            printf("wrong answer\n\n");
            sb++;
            goto Z;
        }
    }   
    getchar();

}