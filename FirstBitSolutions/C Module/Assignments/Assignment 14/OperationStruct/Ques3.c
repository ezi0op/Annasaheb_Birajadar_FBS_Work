//AerageSalary
#include<stdio.h>
typedef struct emp{
	int id; 
	char name[20];
	int salary;
}emp;
void StoreEmployee(emp* ,int );
void AverageSalary(emp* ,int );
void main(){
	int s=3;=
	emp e[s];
	StoreEmployee(e,s);
	AverageSalary(e,s);
}
void AverageSalary(emp* e,int s){
	int  total=0;
	for(int i=0;i<s;i++){
		total=total + e[i].salary;
	}
	float Avg=total/s;
	printf("Average salary of the employees will be %.2lf",Avg);
	
}
void StoreEmployee(emp* e,int s){
	for(int i=0;i<s;i++){
		printf("Enter the details of the employees %d",i+1);
		printf("\nID :");
		scanf("%d",&e[i].id);
		printf("Name :");
		scanf("%s",e[i].name);
		printf("Salary :");
		scanf("%d",&e[i].salary);
	}
}