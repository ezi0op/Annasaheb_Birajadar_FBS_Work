//UpdateEmployee
#include<stdio.h>
typedef struct emp{
	int id;
	char name[20];
	int salary;
}emp;
void StoreEmployee(emp* ,int );
void UpdateEmployee(emp* ,int );
void main(){
	int s=3;
	emp e[s];
	StoreEmployee(e,s);
	UpdateEmployee(e,s);
}
void UpdateEmployee(emp* a,int s){
	int id,found=1;
	printf("Enter the ID want to update :");
	scanf("%d",&id);
	for(int i=0;i<s;i++){
		if(a[i].id==id){
			found=0;
			printf("Enter the details to Update Employee %d:",id);
			printf("\nEnter the Updated Name :");
			scanf("%s",a[i].name);
			printf("Enter the Updated Salary :");
			scanf("%d",&a[i].salary);
			printf("Update Successful!");
			break;
		}
	}
	if(found==1){
		printf("Entered Employee id %d is not found :",id);
	}
	
}
void StoreEmployee(emp* a,int s){
	for(int i=0;i<s;i++){
		printf("Enter the details of the Employee %d",i+1);
		printf("\nId :");
		scanf("%d",&a[i].id);
		printf("Name :");
		scanf("%s",a[i].name);
		printf("Salary :");
		scanf("%d",&a[i].salary);
	}
}