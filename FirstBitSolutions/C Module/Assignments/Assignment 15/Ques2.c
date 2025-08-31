//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
//these members from user and display them. Also perform addition of two time variables
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
//the given time into sec.
#include<stdio.h>
typedef struct Time {
	int hrs;
	int min;
	int sec;
} Time;
Time StoreTime();
void DisplayTime(Time* );
Time AddTime(Time ,Time );
int TimeToSeconds(Time t);
void main() {
	Time t1,t2,result;
	printf("\nEnter the details for Time t1");
	t1=StoreTime();


	printf("\nEnter the details for Time t2");
	t2=StoreTime();

	result=AddTime(t1,t2);
	DisplayTime(&result);
	printf("\nTotalSecs%d",TimeToSeconds(result));
	

}
Time AddTime(Time t1,Time t2) {
	int total1=(t1.hrs*3600)+(t1.min*60)+t1.sec;
	int total2=(t2.hrs*3600)+(t2.min*60)+t2.sec;
//	Addition of two time and converted them in all seconds
	int total = total1+total2;
	Time t;
//	no of hrs
	t.hrs=total/3600;
//	remaining secs
	total=total%3600;
//	nor min
	t.min=total/60;
//	leftover sec
	t.sec=total%60;
	return t;
}
int TimeToSeconds(Time t){
//	total secs
	return (t.hrs*3600)+(t.min*60)+t.sec;

}
Time StoreTime() {
	Time t;
	printf("\nHours :");
	scanf("%d",&t.hrs);
	printf("Min :");
	scanf("%d",&t.min);
	printf("Sec :");
	scanf("%d",&t.sec);
	return t;
}
void DisplayTime(Time* T) {
	printf("\nEntered  details of the  Time :\n");
	printf("\nHours :%d,Min :%d,Sec :%d",T->hrs,T->min,T->sec);
}