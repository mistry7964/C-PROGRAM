#include<stdio.h>
int main()
{
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
    int i,j,x;

     for ( i = 1; i <= 5; i++)
    {
        x=i;
        for ( j = i; j <= 5; j++)
        {
            printf("%d",x);        
            x++;
        }
        printf("\n");
    }
    
    return 0;
}