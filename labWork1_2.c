#include<stdio.h>
int main()
{
    // Q.1 Write a Program to print your name, age, and school.
    int age;
    char name[10],schoolName[20];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter you age : ");
    scanf("%d",&age);
    printf("Enter your schoolName : ");
    scanf("%s",&schoolName);
    printf("My name is %s and my age is %d and my school name is %s",name,age,schoolName);
    // To print pattern
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==1 || i==7)
            {
                printf("-");
            }
            else if(i==3 && j==1)
            {
                printf("R");
            }
            else if(i==4 && j==1)
            {
                printf("N");
            }
            else if(i==5 && j==1)
            {
                printf("W");
            }
            else if(j==1 || j==8)
            {
                printf("|");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
     printf("\n");
    printf("\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=14;j++)
        {
            if((i+j) == 10)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         printf("\n");
    }

    return 0;
}