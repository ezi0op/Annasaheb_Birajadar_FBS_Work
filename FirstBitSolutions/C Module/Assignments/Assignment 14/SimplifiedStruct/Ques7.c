//7. Time (hour, min, sec)
#include<stdio.h>
#include<string.h>
struct Time {
	int hour;
	int min;
	int sec;
};
void main() {
	struct Time t1,t2,t3;
	t1.hour=101;
	t1.min=17;
	t1.sec=75;
	printf("\nHour=%d",t1.hour);
	printf("\nMin=%d",t1.min);
	printf("\nSec=%d",t1.sec);
	
	printf("\nEnter details for Time 2 :\n");
	printf("Hour :");
	scanf("%d",&t2.hour);
	printf("Min :");
	scanf("%d",&t2.min);
	printf("Sec :");
	scanf("%d",&t2.sec);
	printf("\nHour=%d",t2.hour);
	printf("\nMin=%d",t2.min);
	printf("\nSec=%d",t2.sec);
	
	printf("\nEnter details for Time 3 :\n");
	printf("Hour :");
	scanf("%d",&t3.hour);
	printf("Min :");
	scanf("%d",&t3.min);
	printf("Sec :");
	scanf("%d",&t3.sec);
	printf("\nHour=%d",t3.hour);
	printf("\nMin=%d",t3.min);
	printf("\nSec=%d",t3.sec);
}