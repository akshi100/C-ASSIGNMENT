#include<stdio.h>
int main()
{
    int basic_salary, dallowance, house_rent, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%d",&basic_salary);

    dallowance = 0.5 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + dallowance + house_rent;

    printf("\n Basic Salary: %d",  basic_salary);
    printf("\n Dearness Allowance: %d", dallowance);
    printf("\n House Rent: %d", house_rent);
    printf("\n\n Gross Salary: %d", gross_salary);

    return 0;
}
