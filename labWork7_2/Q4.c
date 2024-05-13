// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1
#include<stdio.h>
int main()
{

    int i,j;
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= 5; j++)
        {
            // if(j%2 == 0)
            // {
            //     printf("0");
            // }
            // else if(j%2 == 1)
            // {
            //     printf("1");
            // }
            if(i+j >= 6)
            {
                printf("%d ", j%2);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
