#include<stdio.h>
#include<math.h>

int main()
{
    // Swapping using third variable
    int x,y,z;
    printf("X : ");
    scanf("%d",&x);
    printf("Y : ");
    scanf("%d",&y);
    printf("Before swapping\n");
    printf("x : %d\ny : %d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nAfter swapping\n");
    printf("x : %d\ny : %d\n\n",x,y);
    // Swapping without using third variable
    // int a,b;
    // printf("A : ");
    // scanf("%d",&b);
    // printf("B : ");
    // scanf("%d",&b); 
    // printf("Before swapping\n");
    // printf("a : %d\nb : %d",x,y);
    // a = b - a; // a=3,b=2
    // b = 
    // printf("\nAfter swapping\n");
    // printf("a : %d\nb : %d",x,y);
    int c,d,a1,a2,a3;
    printf("X : ");
    scanf("%d",&c);
    printf("Y : ");
    scanf("%d",&d);
    a1 = pow((c+d),2);
    a2 = pow((c-d),2);
    a3 = pow((c+d),3);
    printf("(x+y)^2 = %d\n",a1);
    printf("(x-y)^2 = %d\n",a2);
    printf("(x+y)^3 = %d\n",a3);
    return 0;
}