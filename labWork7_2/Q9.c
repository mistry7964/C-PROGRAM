// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
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
        printf("\n");
    }
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= i+1; j++)
        {
             printf("%d",j);
        }
        printf("\n");
    }
    
    return 0 ;
}