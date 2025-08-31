//6. Date (date, month, year)
#include<stdio.h>
#include<string.h>
typedef struct Date {
	int date;
	char month[20];
	int year;
} Date;
void DisplayDate(Date*,int );
void StoreDate(Date*,int );
void main() {
	int a=2;
	Date d[a];
	StoreDate(d,a);
	DisplayDate(d,a);


}
void StoreDate(Date* d,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for Date %d :\n",i+1);
		printf("Date :");
		scanf("%d",&d[i].date);
		printf("Month :");
		scanf("%s",d[i].month);
		printf("Year :");
		scanf("%d",&d[i].year);
	}
}
void DisplayDate(Date*  d,int s) {
	for(int i=0; i<s; i++) {
		printf("\nDate=%d",d[i].date);
		printf("\nMonth=%s",d[i].month);
		printf("\nYear=%d",d[i].year);;
	}
}