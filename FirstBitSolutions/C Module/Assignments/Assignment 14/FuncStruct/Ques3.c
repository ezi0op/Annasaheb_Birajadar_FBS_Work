//3. Admin (id, name, salary, allowance)
#include<stdio.h>
#include<string.h>
typedef struct Admin {
	int Admin_id;
	char Admin_name[20];
	int Admin_salary;
	int Admin_allowance;
} Admin;
Admin StoreAdmin();
void DisplayAdmin(Admin a);
void main() {
	Admin a1,a2,a3;
	printf("\nEnter details for Admin 1 :\n");
	a1=StoreAdmin();
	DisplayAdmin(a1);

	printf("\nEnter details for Admin 2 :\n");
	a2=StoreAdmin();
	DisplayAdmin(a2);

	printf("\nEnter details for Admin 3 :\n");
	a3=StoreAdmin();
	DisplayAdmin(a3);
}
Admin StoreAdmin() {
	Admin temp;
	printf("\nAdmin_id :");
	scanf("%d",&temp.Admin_id);
	printf("Admin_name :");
	scanf("%s",temp.Admin_name);
	printf("Admin_salary :");
	scanf("%d",&temp.Admin_salary);
	printf("Admin_allowance :");
	scanf("%d",&temp.Admin_allowance);
	return temp;
}
void DisplayAdmin(Admin a) {
	printf("\nAdmin_id=%d",a.Admin_id);
	printf("\nAdmin_name=%s",a.Admin_name);
	printf("\nAdmin_salary=%d",a.Admin_salary);
	printf("\nAdmin_allowance=%d",a.Admin_allowance);
}