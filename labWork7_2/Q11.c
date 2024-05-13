//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i+j >= 6)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
        }
        for(j=6;j<=9;j++)
        {   
            if(i==1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}