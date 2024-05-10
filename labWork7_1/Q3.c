#include<stdio.h>
int main()
{
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
    int i,j,x;

    for ( i = 5; i >= 1; i--)
    {
        x=i;
        for ( j = 5; j >= i; j--)
        {
           
            printf("%d",x); 
            x++;
            
        }
        printf("\n");
    }
    
    return 0;
}