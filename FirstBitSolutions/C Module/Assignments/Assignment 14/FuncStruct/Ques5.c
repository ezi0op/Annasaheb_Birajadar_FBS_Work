//5. SalesManager (id, name, salary, incentive, target)
#include<stdio.h>
#include<string.h>
typedef struct SalesManager {
	int SM_id;
	char SM_name[20];
	int SM_salary;
	int SM_incentive;
	int SM_target;
} SalesManager;
SalesManager StoreSalesManager();
void DisplaySalesManager(SalesManager SM);
void main() {
	SalesManager SM1,SM2,SM3;
	printf("\nEnter details for SalesManager 1 :\n");
	SM1=StoreSalesManager();
	DisplaySalesManager( SM1);

	printf("\nEnter details for SalesManager 2 :\n");
	SM2=StoreSalesManager();
	DisplaySalesManager( SM2);

	printf("\nEnter details for SalesManager 3 :\n");
	SM3=StoreSalesManager();
	DisplaySalesManager( SM3);
}
SalesManager StoreSalesManager() {
	SalesManager temp;
	printf("\nSM_id :");
	scanf("%d",&temp.SM_id);
	printf("SM_name :");
	scanf("%s",temp.SM_name);
	printf("SM_salary :");
	scanf("%d",&temp.SM_salary);
	printf("SM_incentive :");
	scanf("%d",&temp.SM_incentive);
	printf("SM_target :");
	scanf("%d",&temp.SM_target);
	return temp;
}
void DisplaySalesManager(SalesManager SM) {
	printf("\nSM_id=%d",SM.SM_id);
	printf("\nSM_name=%s",SM.SM_name);
	printf("\nSM_salary=%d",SM.SM_salary);
	printf("\nSM_incentive=%d",SM.SM_incentive);
	printf("\nSM_target=%d",SM.SM_target);
}