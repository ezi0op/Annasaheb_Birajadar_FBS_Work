//2. Employee (id, name, salary)
#include<stdio.h>
#include<string.h>
struct employee {
	int Emp_id;
	char Emp_name[20];
	int Emp_salary;
};
void main() {
	struct employee e1,e2,e3;
	e1.Emp_id=101;
	strcpy(e1.Emp_name,"fbs");
	e1.Emp_salary=7500;
	printf("\nEmp_id=%d",e1.Emp_id);
	printf("\nEmp_name=%s",e1.Emp_name);
	printf("\nEmp_salary=%d",e1.Emp_salary);
	
	printf("\nEnter details for Employee 2 :\n");
	printf("\nEmp_id :");
	scanf("%d",&e2.Emp_id);
	printf("\nEmp_name :");
	scanf("%s",e2.Emp_name);
	printf("\nEmp_salary :");
	scanf("%d",&e2.Emp_salary);
	printf("\nEmp_id=%d",e2.Emp_id);
	printf("\nEmp_name=%s",e2.Emp_name);
	printf("\nEmp_salary=%d",e2.Emp_salary);
	
	printf("\nEnter details for Employee 3 :\n");
	printf("\nEmp_id :");
	scanf("%d",&e2.Emp_id);
	printf("\nEmp_name :");
	scanf("%s",e2.Emp_name);
	printf("\nEmp_salary :");
	scanf("%d",&e2.Emp_salary);
	printf("\nEmp_id=%d",e2.Emp_id);
	printf("\nEmp_name=%s",e2.Emp_name);
	printf("\nEmp_salary=%d",e2.Emp_salary);
}