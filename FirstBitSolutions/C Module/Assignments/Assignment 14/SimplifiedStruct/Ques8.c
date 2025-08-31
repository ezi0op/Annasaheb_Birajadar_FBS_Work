//8. Distance ( feet, inch)
#include<stdio.h>
#include<string.h>
struct Distance {
	int feet;
	int inch;
};
void main() {
	struct Distance d1,d2,d3;
	d1.feet=101;
	d1.inch=75;
	printf("\nFeet=%d",d1.feet);
	printf("\nInch=%d",d1.inch);
	
	printf("\nEnter details for Distance 2 :\n");
	printf("Feet :");
	scanf("%d",&d2.feet);
	printf("Inch :");
	scanf("%d",&d2.inch);
	printf("\nFeet=%d",d2.feet);
	printf("\nInch=%d",d2.inch);
	
	printf("\nEnter details for Distance 3 :\n");
	printf("Feet :");
	scanf("%d",&d3.feet);
	printf("Inch :");
	scanf("%d",&d3.inch);
	printf("\nd3=%d",d3.inch);
	printf("\nInch=%d",d3.inch);
}