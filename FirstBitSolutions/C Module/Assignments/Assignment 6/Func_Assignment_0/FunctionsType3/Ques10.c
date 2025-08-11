//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include <stdio.h>
void Tm(int ,int ,int ,int ,int);
void Percent(int ,int ,int ,int ,int);

void main()
{
	int a=80;
	int b=56;
	int c=87;
	int d=82;
	int e=89;
	
	Tm(a,b,c,d,e);
	Percent(a,b,c,d,e);
}
void Tm(int a,int b,int c,int d,int e){
	int TotalMarks = a+b+c+d+e;
	printf("Total Marks = %d\n", TotalMarks);
	
}
void Percent(int a,int b,int c,int d,int e){
	int TotalMarks = a+b+c+d+e;
	float Percentage = (TotalMarks/100)*100;
	printf("Percentage = %.2f%%\n", Percentage);
	
}