#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers for finding out minimum number\n");
    printf("Enter A : \n");
    scanf("%d",&a);
    printf("Enter B : \n");
    scanf("%d",&b);
    printf("A : %d\n",a);
    printf("B : %d\n",b);
    if(a<b)
    {
        printf("a is minimum\n");
    }
    else if (b<a)
    {
        printf("b is minimun\n");
    }
    else
    {
        printf("All are equal nothing to compare\n");
    }
    int num;
    printf("Enter any random number : ");
    scanf("%d",&num);
    printf("Number is %d\n",num);
    if(num <= -1)
    {
        printf("%d is negative Number",num);
    }
    else if(num >= 1)
    {
        printf("%d is positive Number",num);
    }
    else
    {
        printf("%d is neutral Number",num);
    }
    return 0;
}