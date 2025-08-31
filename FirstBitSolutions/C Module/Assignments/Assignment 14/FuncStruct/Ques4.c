//4. HR (id, name, salary, commission)
#include<stdio.h>
#include<string.h>
typedef struct HR {
	int HR_id;
	char HR_name[20];
	int HR_salary;
	int HR_commission;
} HR;
HR StoreHR();
void DisplayHR(HR h);
void main() {
	HR h1,h2,h3;
	printf("\nEnter details for HR 1 :\n");
	h1=StoreHR();
	DisplayHR(h1);

	printf("\nEnter details for HR 2 :\n");
	h2=StoreHR();
	DisplayHR(h3);

	printf("\nEnter details for HR 3 :\n");
	h3=StoreHR();
	DisplayHR(h3);
}
HR StoreHR() {
	HR temp;
	printf("\nHR_id :");
	scanf("%d",&temp.HR_id);
	printf("HR_name :");
	scanf("%s",temp.HR_name);
	printf("HR_salary :");
	scanf("%d",&temp.HR_salary);
	printf("HR_commission :");
	scanf("%d",&temp.HR_commission);
	return temp;
}
void DisplayHR(HR h) {
	printf("\nHR_id=%d",h.HR_id);
	printf("\nHR_name=%s",h.HR_name);
	printf("\nHR_salary=%d",h.HR_salary);
	printf("\nHR_commission=%d",h.HR_commission);
}




