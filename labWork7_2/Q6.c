// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5
#include<stdio.h>
int main()
{
    int i,j,x;
    for ( i = 1; i <= 5; i++)
    {
        for(j = 5; j >= 1; j--)
        {
                x=j;
                if(i+j <= 6)
                {
                    printf("%d",x);
                    x--;
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