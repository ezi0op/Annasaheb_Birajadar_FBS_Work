//7. Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
int Hours(int,int );
int minu(int);
void main() {
	int min=130;
	int hours;

	int hrs=Hours(min,hours);
	int Min=minu(min);
	printf("Remaining hours are %d and minutes are %d",hrs,Min);
}
int Hours(int min,int hours) {
	return hours=min/60;
	min=min%60;

}
int minu(int min) {
	return min=min%60;
}