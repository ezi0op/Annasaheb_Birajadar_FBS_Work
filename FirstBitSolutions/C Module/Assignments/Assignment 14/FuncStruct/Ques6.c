//6. Date (date, month, year)
#include<stdio.h>
#include<string.h>
typedef struct Date {
	int date;
	char month[20];
	int year;
} Date;
Date StoreDate();
void DisplayDate(Date d);
void main() {
	Date d1,d2,d3;
	printf("\nEnter details for Date 1 :\n");
	d1=StoreDate();
	DisplayDate(d1);

	printf("\nEnter details for Date 2 :\n");
	d2=StoreDate();
	DisplayDate(d2);

	printf("\nEnter details for Date 3 :\n");
	d3=StoreDate();
	DisplayDate(d3);
}
Date StoreDate() {
	Date temp;
	printf("Date :");
	scanf("%d",&temp.date);
	printf("Month :");
	scanf("%s",temp.month);
	printf("Year :");
	scanf("%d",&temp.year);
	return temp;
}
void DisplayDate(Date d) {
	printf("\nDate=%d",d.date);
	printf("\nMonth=%s",d.month);
	printf("\nYear=%d",d.year);
}