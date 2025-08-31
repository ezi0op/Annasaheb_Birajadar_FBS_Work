//2. Employee (id, name, salary)
#include<stdio.h>
#include<string.h>
typedef struct Employee {
	int Emp_id;
	char Emp_name[20];
	int Emp_salary;
} Employee;
void StoreEmployee(Employee*,int );
void DisplayEmployee(Employee*,int );
void main(){
	int a=3;
	Employee e[a];
	StoreEmployee(e,a);
	DisplayEmployee(e,a);

}
void StoreEmployee(Employee* e,int s){
	for(int i=0; i<s; i++){
		printf("\nEnter details for Employee %d :",i+1);
		printf("\nEmp_id :");
		scanf("%d",&e[i].Emp_id);
		printf("\nEmp_name :");
		scanf("%s",e[i].Emp_name);
		printf("\nEmp_salary :");
		scanf("%d",&e[i].Emp_salary);
	}
}

void DisplayEmployee(Employee* e,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEmp_id=%d",e[i].Emp_id);
		printf("\nEmp_name=%s",e[i].Emp_name);
		printf("\nEmp_salary=%d",e[i].Emp_salary);
	}

}