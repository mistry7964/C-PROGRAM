#include<stdio.h>
int main()
{
    // Area & Perimeter of circle 
    float r,a_circle,perimeter;
    float pi = 3.14;
    printf("Enter radius of circle : ");
    scanf("%f",&r);
    a_circle = pi*r*r;
    perimeter = 2 * pi * r;
    printf("Area of circle with radius %.2f is %.2f\n",r,a_circle);
    printf("Perimeter : %.2f\n\n",perimeter);
  
    // area of reactangle
    float length,width,a_rect;
    printf("Enter Length of Rectangle : \n");
    scanf("%f",&length);
    printf("Enter width of Rectangle : \n");
    scanf("%f",&width);
    a_rect = length * width;
    printf("Area of Rectangle  is %.2f\n\n",a_rect);

    // Area of triangle
    float height,base,a_tri;
    printf("Enter Height of Triangle : \n");
    scanf("%f",&height);
    printf("Enter Base of Triangle : \n");
    scanf("%f",&base);
    a_tri = (height*base)/2;
    printf("Area of Triangle : %.2f\n\n",a_tri);

    // To find simple Interest
    float pr,rI,t,simpleInterest;
    printf("Principal : ");
    scanf("%f",&pr);
    printf("Rate Of Interest : ");
    scanf("%f",&rI);
    printf("Time Period : ");
    scanf("%f",&t);
    simpleInterest = pr * rI * t;
    printf("Simple Interest : %.2f\n\n",simpleInterest);
      return 0;
}
