//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
#include<stdio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            x = j;
            if(i+j < 6)
            {
                printf(" ");
            }
            else
            {
                printf("%d",x);
                x++;
            }
        }
        printf("\n");
    }
    return 0;
}