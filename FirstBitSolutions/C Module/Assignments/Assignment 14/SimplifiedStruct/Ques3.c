//3. Admin (id, name, salary, allowance)
#include<stdio.h>
#include<string.h>
struct Admin {
	int Admin_id;
	char Admin_name[20];
	int Admin_salary;
	int Admin_allowance;
};
void main() {
	struct Admin a1,a2,a3;
	a1.Admin_id=101;
	strcpy(a1.Admin_name,"fbs");
	a1.Admin_salary=7500;
	a1.Admin_allowance=2000;
	printf("\nAdmin_id=%d",a1.Admin_id);
	printf("\nAdmin_name=%s",a1.Admin_name);
	printf("\nAdmin_salary=%d",a1.Admin_salary);
	printf("\nAdmin_allowance=%d",a1.Admin_allowance);
	
	printf("\nEnter details for Admin 2 :\n");
	printf("\nAdmin_id :");
	scanf("%d",&a2.Admin_id);
	printf("Admin_name :");
	scanf("%s",a2.Admin_name);
	printf("Admin_salary :");
	scanf("%d",&a2.Admin_salary);
	printf("Admin_allowance :",a2.Admin_allowance);
	scanf("%d",&a2.Admin_allowance);
	printf("\nAdmin_id=%d",a2.Admin_id);
	printf("\nAdmin_name=%s",a2.Admin_name);
	printf("\nAdmin_salary=%d",a2.Admin_salary);
	printf("\nAdmin_allowance=%d",a2.Admin_allowance);
	
	printf("\nEnter details for Admin 3 :\n");
	printf("\nAdmin_id :");
	scanf("%d",&a3.Admin_id);
	printf("Admin_name :");
	scanf("%s",a3.Admin_name);
	printf("Admin_salary :");
	scanf("%d",&a3.Admin_salary);
	printf("Admin_allowance :");
	scanf("%d",&a3.Admin_allowance);
	printf("\nAdmin_id=%d",a3.Admin_id);
	printf("\nAdmin_name=%s",a3.Admin_name);
	printf("\nAdmin_salary=%d",a3.Admin_salary);
	printf("\nAdmin_allowance=%d",a3.Admin_allowance);
}