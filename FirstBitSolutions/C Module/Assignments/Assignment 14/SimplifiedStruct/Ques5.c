//5. SalesManager (id, name, salary, incentive, target)
#include<stdio.h>
#include<string.h>
struct SalesManager {
	int SM_id;
	char SM_name[20];
	int SM_salary;
	int SM_incentive;
	int SM_target;
};
void main() {
	struct SalesManager SM1,SM2,SM3;
	SM1.SM_id=101;
	strcpy(SM1.SM_name,"fbs");
	SM1.SM_salary=7500;
	SM1.SM_incentive=2000;
	SM1.SM_target=9000;
	printf("\nSM_id=%d",SM1.SM_id);
	printf("\nSM_name=%s",SM1.SM_name);
	printf("\nSM_salary=%d",SM1.SM_salary);
	printf("\nSM_incentive=%d",SM1.SM_incentive);
	printf("\nSM_target=%d",SM1.SM_target);
	
	printf("\nEnter details for SalesManager 2 :\n");
	printf("\nSM_id :");
	scanf("%d",&SM2.SM_id);
	printf("SM_name :");
	scanf("%s",SM2.SM_name);
	printf("SM_salary :");
	scanf("%d",&SM2.SM_salary);
	printf("SM_incentive :");
	scanf("%d",&SM2.SM_incentive);
	printf("SM_target :");
	scanf("%d",&SM2.SM_target);
	printf("\nSM_id=%d",SM2.SM_id);
	printf("\nSM_name=%s",SM2.SM_name);
	printf("\nSM_salary=%d",SM2.SM_salary);
	printf("\nSM_incentive=%d",SM2.SM_incentive);
	printf("\nSM_target=%d",SM2.SM_target);
	
	printf("\nEnter details for SalesManager 3 :\n");
	printf("\nSM_id :");
	scanf("%d",&SM3.SM_id);
	printf("SM_name :");
	scanf("%s",SM3.SM_name);
	printf("SM_salary :");
	scanf("%d",&SM3.SM_salary);
	printf("SM_incentive :");
	scanf("%d",&SM3.SM_incentive);
	printf("SM_target :");
	scanf("%d",&SM2.SM_target);
	printf("\nSM_id=%d",SM3.SM_id);
	printf("\nSM_name=%s",SM3.SM_name);
	printf("\nSM_salary=%d",SM3.SM_salary);
	printf("\nSM_incentive=%d",SM3.SM_incentive);
	printf("\nSM_target=%d",SM3.SM_target);
}
