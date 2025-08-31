//7. Time (hour, min, sec)
#include<stdio.h>
#include<string.h>
typedef struct Time {
	int hour;
	int min;
	int sec;
} Time;
Time StoreTime();
void DisplayTime(Time );
void main() {
	Time t1,t2,t3;
	printf("\nEnter details for Time 1 :\n");
	t1=StoreTime();
	DisplayTime(t1);

	printf("\nEnter details for Time 2 :\n");
	t2=StoreTime();
	DisplayTime(t2);

	printf("\nEnter details for Time 3 :\n");
	t3=StoreTime();
	DisplayTime(t3);
}
Time StoreTime() {
	Time temp;
	printf("Hour :");
	scanf("%d",&temp.hour);
	printf("Min :");
	scanf("%d",&temp.min);
	printf("Sec :");
	scanf("%d",&temp.sec);
	return temp;
}
void DisplayTime(Time t) {
	printf("\nHour=%d",t.hour);
	printf("\nMin=%d",t.min);
	printf("\nSec=%d",t.sec);
}