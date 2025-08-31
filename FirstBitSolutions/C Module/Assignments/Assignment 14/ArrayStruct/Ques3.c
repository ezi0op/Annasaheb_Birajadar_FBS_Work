//3. Admin (id, name, salary, allowance)
#include<stdio.h>
typedef struct Admin {
	int Admin_id;
	char Admin_name[20];
	int Admin_salary;
	int Admin_allowance;
} Admin;
void StoreAdmin(Admin*,int );
void DisplayAdmin(Admin*,int );
void main() {
	int s=2;
	Admin a[s];
	StoreAdmin(a,s);
	DisplayAdmin(a,s);
}
void StoreAdmin(Admin* a,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for Admin %d:",i+1);
		printf("\nAdmin_id :");
		scanf("%d",&a[i].Admin_id);
		printf("Admin_name :");
		scanf("%s",a[i].Admin_name);
		printf("Admin_salary :");
		scanf("%d",&a[i].Admin_salary);
		printf("Admin_allowance :",a[i].Admin_allowance);
		scanf("%d",&a[i].Admin_allowance);
	}
}
void DisplayAdmin(Admin* a,int s) {
	for(int i=0; i<s; i++) {
				printf("\nAdmin_id=%d",a[i].Admin_id);
		printf("\nAdmin_name=%s",a[i].Admin_name);
		printf("\nAdmin_salary=%d",a[i].Admin_salary);
		printf("\nAdmin_allowance=%d",a[i].Admin_allowance);

	}
}