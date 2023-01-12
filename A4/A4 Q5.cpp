#include<stdio.h>
int main()
{
	int basic_salary, dearness_allowance, gross_salary;
	printf("Enter Basic Salary : ");
	scanf("%d",&basic_salary);
	dearness_allowance = 0.4 * basic_salary;
	gross_salary = basic_salary + dearness_allowance;
	printf("Basic Salary: %d", basic_salary);
	printf("Dearness Allowance: %d", dearness_allowance);
	printf("Gross Salary: %d", gross_salary);
	return 0;
	
}
