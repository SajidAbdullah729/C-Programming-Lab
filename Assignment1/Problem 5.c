#include<stdio.h>
#include<math.h>
int main()
{
    float basicsalary,grosssalary;
    printf("Rahim's Basic Salary: ");
    scanf("%f",&basicsalary);
    grosssalary=(.3*basicsalary)+(.05*basicsalary)+1000;
    printf("Rahim's Gross Salary: %f",grosssalary);
    return 0;
}
