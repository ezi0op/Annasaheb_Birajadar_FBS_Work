//7. Time (hour, min, sec)
#include<stdio.h>
#include<string.h>
typedef struct Time {
	int hour;
	int min;
	int sec;
} Time;
void StoreTime(Time*,int );
void DisplayTime(Time* ,int );
void main() {
	int a=2;
	Time t[a];
	StoreTime(t,a);
	DisplayTime(t,a);

}
void StoreTime(Time* t,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for Time 2 :\n");
		printf("Hour :");
		scanf("%d",&t[i].hour);
		printf("Min :");
		scanf("%d",&t[i].min);
		printf("Sec :");
		scanf("%d",&t[i].sec);
	}
}
void DisplayTime(Time* t,int s) {
	for(int i=0; i<s; i++) {
		printf("\nHour=%d",t[i].hour);
		printf("\nMin=%d",t[i].min);
		printf("\nSec=%d",t[i].sec);
	}
}