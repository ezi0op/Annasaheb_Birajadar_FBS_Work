//SearchForSalary
#include<stdio.h>
typedef struct emp{
	int id;
	char name[20];
	int salary;
}emp;
void StoreEmployee(emp* ,int );
void SearchSalaryEmp(emp* ,int ,int );
void main(){
	int s=3,d;
	emp e[s];
	StoreEmployee(e,s);
	printf("Enter the Employee id you want to search :");
	scanf("%d",&d);
	SearchSalaryEmp(e,s,d);
}
void SearchSalaryEmp(emp* a,int s,int n){
	int found=1;
	for(int i=0;i<s;i++){
		if(a[i].id==n){
			printf("Employee found!");
			printf("\nID: %d",a[i].id);
			printf("Name: %s",a[i].name);
			printf("Salary: %d",a[i].salary);
			found=0;
		}
	}
	if(found==1){
		printf("employee not found :");
	}
}
void StoreEmployee(emp* s,int b){
	for(int i=0;i<b;i++){
		printf("Enter the details of Employee %d:",i+1);
		printf("\nId :");
		scanf("%d",&s[i].id);
		printf("Name :");
		scanf("%s",s[i].name);
		printf("Salary :");
		scanf("%d",&s[i].salary);
	}
}