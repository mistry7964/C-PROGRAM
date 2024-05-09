#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers for finding out minimum number\n");
    printf("Enter A : \n");
    scanf("%d",&a);
    printf("Enter B : \n");
    scanf("%d",&b);
    printf("Enter C : \n");
    scanf("%d",&c);
    printf("A : %d\n",a);
    printf("B : %d\n",b);
     printf("C : %d\n",c);
    if(a<b && a<c)
    {
        printf("a is minimum\n");
    }
    else if (b<a && b<c)
    {
        printf("b is minimun\n");
    }
    else if (c<a && c<b)
    {
        printf("c is minimun\n");
    }
    else
    {
        printf("All are equal nothing to compare\n");
    }
   
    int p,q,r,s;
    printf("Enter four numbers for finding out maximum number\n");
    printf("Enter P : \n");
    scanf("%d",&p);
    printf("Enter Q : \n");
    scanf("%d",&q);
    printf("Enter R : \n");
    scanf("%d",&r);
    printf("Enter S : \n");
    scanf("%d",&s);
    printf("P : %d\n",p);
    printf("Q : %d\n",q);
    printf("R : %d\n",r);
    printf("S : %d\n",s);
    if(p>q && p>r && p>s)
    {
        printf("P is maximmum");
    }
    else if(q>p && q>r && q>s)
    {
        printf("Q is maximmum");
    }
    else if(r>q && r>p && r>s)
    {
        printf("R is maximmum");
    }
    else if(s>q && s>r && s>p)
    {
        printf("S is maximmum");
    }
    else
    {
         printf("All are equal nothing to compare\n");
    }

    return 0;
}