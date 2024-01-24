#include<stdio.h>

int housingallowance(int salary);
int transportallowance(int salary);
int netsalary(int salary,int house, int transport, int security);

int main(){
int salary, house, transport, security=5000;

printf("Welcome to Employee Payroll System\n");

printf("Enter the basic salary of Employee\n");
scanf("%d",&salary);

printf("Employee Details\n");

house=housingallowance(salary);
transport=transportallowance(salary);

printf("Housing Allowance = %d\n", housingallowance(salary));
printf("Transport Allowance = %d\n", transportallowance(salary));
printf("Net Salary = %d\n", netsalary(salary,house,transport,security));

}

int housingallowance(int salary){

return 0.05*salary;
	
}

int transportallowance(int salary){

return salary*7/100;


}


int netsalary(int salary, int house, int transport, int security){

return salary+house+transport-security;

}
