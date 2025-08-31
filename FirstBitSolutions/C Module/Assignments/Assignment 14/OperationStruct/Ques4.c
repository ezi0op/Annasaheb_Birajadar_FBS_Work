//DeleteEmployee
#include<stdio.h>
typedef struct emp {
	int id;
	char name[20];
	int salary;
} emp;
void StoreEmployee(emp*,int );
void DeleteEmployee(emp*,int );
void DisplayEmployee(emp* ,int );
void main() {
	int s=3;
	emp e[s];
	StoreEmployee(e,s);
	DeleteEmployee(e,s);

}
void DeleteEmployee(emp* a,int s) {
	int id,found=1;
	printf("Enter the ID want to Delete :");
	scanf("%d",&id);
	for(int i=0; i<s; i++) {
		for(int j=i; j<s-1; j++) {
			if(a[i].id==id) {
				a[i]=a[j+1];
				found=0;
				s--;
				DisplayEmployee(a,s);
				break;
			}
		}

	}
	if(found==1) {
		printf("Entered Employee id %d is not found :",id);
	}

}
void StoreEmployee(emp* a,int s) {
	for(int i=0; i<s; i++) {
		printf("Enter the details of the Employee %d",i+1);
		printf("\nId :");
		scanf("%d",&a[i].id);
		printf("Name :");
		scanf("%s",a[i].name);
		printf("Salary :");
		scanf("%d",&a[i].salary);
	}
}
void DisplayEmployee(emp* a,int s) {
	for(int i=0; i<s; i++) {
		printf("\nID: %d",a[i].id);
		printf("Name: %s",a[i].name);
		printf("Salary: %d",a[i].salary);
	}
}

