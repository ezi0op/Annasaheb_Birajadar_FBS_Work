#include<stdio.h>
typedef struct emp {
	int id;
	char name[20];
	int salary;
} emp;
void AverageSalaryEmployee(emp*,int ) ;
void UpdateEmployee(emp*,int );
void MaxSalaryEmployee(emp*,int );
void MinSalaryEmployee(emp*,int );
void SearchSalaryEmp(emp*,int,int );
void DeleteEmployee(emp*,int );
void StoreEmployee(emp*,int );
void DisplayEmployee(emp*,int );
void main() {
	int s=3;
	emp e[s];
	StoreEmployee(e,s);
	int choice;
	while (1) {
		printf("\nMenu:\n");
		printf("1. Display \n");
		printf("2. Delete \n");
		printf("3. Update \n");
		printf("4. Find Minimum\n");
		printf("5. Find Maximum\n");
		printf("6. Search Emplpoyee\n");
		printf("7. Calculate Average Salary\n");
		printf("8. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		if (choice == 8) {
			printf("Exiting program.\n");
			break;
		}

		if (choice == 1) {
			DisplayEmployee(e,s);
		} else if (choice == 2) {
			DeleteEmployee(e,s);
		} else if (choice == 3) {
			UpdateEmployee(e,s);
		} else if (choice == 4) {
			MinSalaryEmployee(e,s);
		} else if (choice == 5) {
			MaxSalaryEmployee(e,s);
		} else if (choice == 6) {
			SearchSalaryEmp(e,s,2);
		} else if (choice == 7) {
			AverageSalaryEmployee(e,s);
		} else {
			printf("Invalid choice! Please try again.\n");
		}
	}
}
void AverageSalaryEmployee(emp* e,int s) {
	int  total=0;
	for(int i=0; i<s; i++) {
		total=total + e[i].salary;
	}
	float Avg=total/s;
	printf("Average salary of the employees will be %.2f",Avg);

}
void UpdateEmployee(emp* a,int s) {
	int id,found=1;
	printf("Enter the ID want to update :");
	scanf("%d",&id);
	for(int i=0; i<s; i++) {
		if(a[i].id==id) {
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
	if(found==1) {
		printf("Entered Employee id %d is not found :",id);
	}

}
void MaxSalaryEmployee(emp* a,int b) {
	int MaxSalary=a[0].salary;
	int index=0;
	for(int i=0; i<b; i++) {
		if(a[i].salary>MaxSalary) {
			MaxSalary=a[i].salary;
			index=i;
		}
	}
	printf("\nHighest Slaray of the Employee %d is %d",index,a[index].salary);
}
void MinSalaryEmployee(emp* a,int b) {
	int MinSalary=a[0].salary;
	int index=0;
	for(int i=0; i<b; i++) {
		if(a[i].salary<MinSalary) {
			MinSalary=a[i].salary;
			index=i;
		}
	}
	printf("\nLowest Slaray of the Employee %d is %d",index,a[index].salary);
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
				DisplayEmployee(a,s);
				break;
			}
		}

	}
	if(found==1) {
		printf("Entered Employee id %d is not found! :",id);
	}

}
void SearchSalaryEmp(emp* a,int s,int n) {
	int found=1;
	for(int i=0; i<s; i++) {
		if(a[i].id==n) {
			printf("Employee found!");
			printf("\nID: %d",a[i].id);
			printf("Name: %s",a[i].name);
			printf("Salary: %d",a[i].salary);
			found=0;
		}
	}
	if(found==1) {
		printf("Employee not found! :");
	}
}
void StoreEmployee(emp* s,int b) {
	for(int i=0; i<b; i++) {
		printf("Enter the details of Employee %d:",i+1);
		printf("\nId :");
		scanf("%d",&s[i].id);
		printf("Name :");
		scanf("%s",s[i].name);
		printf("Salary :");
		scanf("%d",&s[i].salary);
	}
}
void DisplayEmployee(emp* a,int s) {
	for(int i=0; i<s; i++) {
		printf("\nID: %d",a[i].id);
		printf("Name: %s",a[i].name);
		printf("Salary: %d",a[i].salary);
	}
}

