#include<stdio.h>
int main()
{
    float cel,far;
    printf("Enter temperatre in terms of celsius : ");
    scanf("%f",&cel);
    printf("Temperature : %.2fC\n\n",cel);
    far = (cel * 9/5) + 32;
    printf("Temperature after converting into fahrenhit\n\n");
    printf("Temperature : %.2fF\n",far);

    
    // int a,b,c;
    // printf("Enter a : ");
    // scanf("%d",&a);
    // printf("Enter b : ");
    // scanf("%d",&b);
    // c = pow(a,2) + pow(b,2);
    // printf("C : A^2 + B^2 = %d",c);


    float basic_salary, hra, da, ta;
    float gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter the percentage of House Rent Allowance (HRA): ");
    scanf("%f", &hra);
    printf("Enter the percentage of Dearness Allowance (DA): ");
    scanf("%f", &da);
    printf("Enter the percentage of Travel Allowance (TA): ");
    scanf("%f", &ta);
    gross_salary = basic_salary + (basic_salary * hra / 100) +
                   (basic_salary * da / 100) +
                   (basic_salary * ta/ 100);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}