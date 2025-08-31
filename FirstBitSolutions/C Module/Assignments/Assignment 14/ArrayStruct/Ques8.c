//8. Distance ( feet, inch)
#include<stdio.h>
#include<string.h>
typedef struct Distance {
	int feet;
	int inch;
} Distance;
void StoreDistance(Distance*,int );
void DisplayDistance(Distance*,int );
void main() {
	int a=2;
	Distance d[a];
	StoreDistance(d,a);
	DisplayDistance(d,a);
}
void StoreDistance(Distance* d,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for Distance %d :",i+1);
		printf("\nFeet :");
		scanf("%d",&d[i].feet);
		printf("Inch :");
		scanf("%d",&d[i].inch);
	}
}
void DisplayDistance(Distance* d,int s) {
	for(int i=0; i<s; i++) {
		printf("\nFeet=%d",d[i].feet);
		printf("\nInch=%d",d[i].inch);
	}
}