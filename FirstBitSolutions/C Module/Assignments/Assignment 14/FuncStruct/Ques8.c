//8. Distance ( feet, inch)
#include<stdio.h>
#include<string.h>
typedef struct Distance {
	int feet;
	int inch;
} Distance;
Distance StoreDistance();
void DisplayDistance(Distance d);
void main() {
	Distance d1,d2,d3;
	printf("\nEnter details for Distance 1 :\n");
	d1=StoreDistance();
	DisplayDistance(d1);

	printf("\nEnter details for Distance 2 :\n");
	d2=StoreDistance();
	DisplayDistance(d2);

	printf("\nEnter details for Distance 3 :\n");
	d3=StoreDistance();
	DisplayDistance(d3);
}
Distance StoreDistance() {
	Distance temp;
	printf("Feet :");
	scanf("%d",&temp.feet);
	printf("Inch :");
	scanf("%d",&temp.inch);
	return temp;
}
void DisplayDistance(Distance d) {
	printf("\nFeet=%d",d.feet);
	printf("\nInch=%d",d.inch);
}