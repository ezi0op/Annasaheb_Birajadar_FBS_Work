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
void DisplaySM(SalesManager*,int );
void StoreSM(SalesManager*,int );
void main() {
	int a=2;
	SalesManager SM[a];
	StoreSM(SM,a);
	DisplaySM(SM,a);
	
}
void StoreSM(SalesManager* SM,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for SalesManager %d :",i+1);
		printf("\nSM_id :");
		scanf("%d",&SM[i].SM_id);
		printf("SM_name :");
		scanf("%s",SM[i].SM_name);
		printf("SM_salary :");
		scanf("%d",&SM[i].SM_salary);
		printf("SM_incentive :");
		scanf("%d",&SM[i].SM_incentive);
		printf("SM_target :");
		scanf("%d",&SM[i].SM_target);
	}
}
void DisplaySM(SalesManager* SM,int s) {
	for(int i=0; i<s; i++) {
		printf("\nSM_id=%d",SM[i].SM_id);
		printf("\nSM_name=%s",SM[i].SM_name);
		printf("\nSM_salary=%d",SM[i].SM_salary);
		printf("\nSM_incentive=%d",SM[i].SM_incentive);
		printf("\nSM_target=%d",SM[i].SM_target);
	}
}
