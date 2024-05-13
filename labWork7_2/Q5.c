// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=1 ;j--)
        {
            if(i+j <= 6)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}