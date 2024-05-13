// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
#include<stdio.h>
int main()
{
    int i,j,x,y;
    for( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            x=j;
            if(j>i)
            {
                printf(" ");
            }
            else
            {
               printf("%d",j);
            }
        }
        for(j = 6; j <= 10; j++)
        {     
            if(i+j <=10)
            {
                printf(" ");
            }
            else
            { 
                printf("%d",x);
                x--;     
            }
        }
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            y =j;
           printf("%d",j);
        }
       for ( j = 6; j >= 1; j--)
        {
            if(i >= j)
            {
                printf("%d",y);
                y--;
            }
            else
            {
                printf(" ");
            }           
        }
        printf("\n");
    }
    return 0;
}