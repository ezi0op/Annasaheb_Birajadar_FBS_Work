//2. Employee (id, name, salary)
#include<stdio.h>
#include<string.h>
typedef struct Employee {
	int Emp_id;
	char Emp_name[20];
	int Emp_salary;
} Employee;
Employee StoreEmployee();
void DisplayEmployee(Employee e);
void main() {
	Employee e1,e2,e3;
	printf("\nEnter details for Employee 1 :\n");
	e1=StoreEmployee();
	DisplayEmployee(e1);

	printf("\nEnter details for Employee 2 :\n");
	e2=StoreEmployee();
	DisplayEmployee(e2);

	printf("\nEnter details for Employee 3 :\n");
	e3=StoreEmployee();
	DisplayEmployee(e3);

}
Employee StoreEmployee() {
	Employee temp;
	printf("Emp_id :");
	scanf("%d",&temp.Emp_id);
	printf("Emp_name :");
	scanf("%s",temp.Emp_name);
	printf("Emp_salary :");
	scanf("%d",&temp.Emp_salary);
	return temp;
}
void DisplayEmployee(Employee e) {
	printf("\nEmp_id=%d",e.Emp_id);
	printf("\nEmp_name=%s",e.Emp_name);
	printf("\nEmp_salary=%d",e.Emp_salary);
}