//4. HR (id, name, salary, commission)
#include<stdio.h>
#include<string.h>
struct HR {
	int HR_id;
	char HR_name[20];
	int HR_salary;
	int HR_commission;
};
void main() {
	struct HR h1,h2,h3;
	h1.HR_id=101;
	strcpy(h1.HR_name,"fbs");
	h1.HR_salary=7500;
	h1.HR_commission=2000;
	printf("\nHR_id=%d",h1.HR_id);
	printf("\nHR_name=%s",h1.HR_name);
	printf("\nHR_salary=%d",h1.HR_salary);
	printf("\nHR_commission=%d",h1.HR_commission);
	
	printf("\nEnter details for HR 2 :\n");
	printf("\nHR_id :");
	scanf("%d",&h2.HR_id);
	printf("HR_name :");
	scanf("%s",h2.HR_name);
	printf("HR_salary :");
	scanf("%d",&h2.HR_salary);
	printf("HR_commission :");
	scanf("%d",&h2.HR_commission);
	printf("\nHR_id=%d",h2.HR_id);
	printf("\nHR_name=%s",h2.HR_name);
	printf("\nHR_salary=%d",h2.HR_salary);
	printf("\nHR_commission=%d",h2.HR_commission);
	
	printf("\nEnter details for HR 3 :\n");
	printf("\nHR_id :");
	scanf("%d",&h3.HR_id);
	printf("HR_name :");
	scanf("%s",h3.HR_name);
	printf("HR_salary :");
	scanf("%d",&h3.HR_salary);
	printf("HR_commission :");
	scanf("%d",&h3.HR_commission);
	printf("\nHR_id=%d",h3.HR_id);
	printf("\nHR_name=%s",h3.HR_name);
	printf("\nHR_salary=%d",h3.HR_salary);
	printf("\nHR_commission=%d",h3.HR_commission);
}