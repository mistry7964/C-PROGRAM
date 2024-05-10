#include<stdio.h>
int main()
{
    //to convert temperature from degrees Celsius to Fahrenheit.
    float cel,far;
    printf("Enter temperatre in terms of celsius : ");
    scanf("%f",&cel);
    printf("Temperature : %.2fC\n",cel);
    far = (cel * 9/5) + 32;
    printf("Temperature after converting into fahrenhit\n");
    printf("Temperature : %.2fF\n\n",far);

    
    // int a,b,c;
    // printf("Enter a : ");
    // scanf("%d",&a);
    // printf("Enter b : ");
    // scanf("%d",&b);
    // c = pow(a,2) + pow(b,2);
    // printf("C : A^2 + B^2 = %d",c);

    // to find gross salary by adding % of HRA, DA, and TA of user choice.
    float b_salary, hra, da, ta;
    float g_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &b_salary);
    printf("Enter the percentage of House Rent Allowance (HRA): ");
    scanf("%f", &hra);
    printf("Enter the percentage of Dearness Allowance (DA): ");
    scanf("%f", &da);
    printf("Enter the percentage of Travel Allowance (TA): ");
    scanf("%f", &ta);
    g_salary = b_salary + (b_salary * hra / 100) +
                   (b_salary * da / 100) +
                   (b_salary * ta/ 100);
    printf("Gross Salary: %.2f\n", g_salary);

    return 0;
}