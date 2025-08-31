//6. Date (date, month, year)
#include<stdio.h>
#include<string.h>
struct Date {
	int date;
	char month[20];
	int year;
};
void main() {
	struct Date d1,d2,d3;
	d1.date=101;
	strcpy(d1.month,"june");
	d1.year=75;
	printf("\nDate=%d",d1.date);
	printf("\nMonth=%s",d1.month);
	printf("\nYear=%d",d1.year);
	
	printf("\nEnter details for Date 2 :\n");
	printf("Date :");
	scanf("%d",&d2.date);
	printf("Month :");
	scanf("%s",d2.month);
	printf("Year :");
	scanf("%d",&d2.year);
	printf("\nDate=%d",d2.date);
	printf("\nMonth=%s",d2.month);
	printf("\nYear=%d",d2.year);
	
	printf("\nEnter details for Date 3 :\n");
	printf("Date :");
	scanf("%d",&d3.date);
	printf("Month :");
	scanf("%s",d3.month);
	printf("Year :");
	scanf("%d",&d3.year);
	printf("\nDate=%d",d3.date);
	printf("\nMonth=%s",d3.month);
	printf("\nYear=%d",d3.year);
}