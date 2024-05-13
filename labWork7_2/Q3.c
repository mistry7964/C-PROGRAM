#include<stdio.h>
int main()
{
//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1

    int i,j;
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= 5; j++)
        {
            if(j>=i)
            {
                printf("%d",i);
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