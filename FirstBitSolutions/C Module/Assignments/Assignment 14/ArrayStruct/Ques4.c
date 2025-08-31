//4. HR (id, name, salary, commission)
#include<stdio.h>
#include<string.h>
typedef struct HR {
	int HR_id;
	char HR_name[20];
	int HR_salary;
	int HR_commission;
} HR;
void StoreHR(HR*,int );
void DisplayHR(HR*,int );
void main() {
	int a=2;
	struct HR h[a];
	StoreHR(h,a);
	DisplayHR(h,a);




}
void StoreHR(HR* h,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for HR %d :",i+1);
		printf("\nHR_id :");
		scanf("%d",&h[i].HR_id);
		printf("HR_name :");
		scanf("%s",h[i].HR_name);
		printf("HR_salary :");
		scanf("%d",&h[i].HR_salary);
		printf("HR_commission :");
		scanf("%d",&h[i].HR_commission);
	}
}
void DisplayHR(HR* h,int s) {
	for(int i=0; i<s; i++) {
		printf("\nHR_id=%d",h[i].HR_id);
		printf("\nHR_name=%s",h[i].HR_name);
		printf("\nHR_salary=%d",h[i].HR_salary);
		printf("\nHR_commission=%d",h[i].HR_commission);
	}
}