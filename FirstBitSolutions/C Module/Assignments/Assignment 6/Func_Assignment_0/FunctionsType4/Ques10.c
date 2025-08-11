//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include <stdio.h>
int Tm(int ,int ,int ,int ,int);
float Percent(int ,int ,int ,int ,int);

void main()
{
	int a=80;
	int b=56;
	int c=87;
	int d=82;
	int e=89;
	
	int res=Tm(a,b,c,d,e);
	printf("Total Marks = %d\n", res);
	float per=Percent(a,b,c,d,e);	
	printf("Percentage = %.2f%%\n", per);
}
int Tm(int a,int b,int c,int d,int e){
	return a+b+c+d+e;

	
}
float Percent(int a,int b,int c,int d,int e){
	int TotalMarks = a+b+c+d+e;
	return (TotalMarks/100)*100;

	
}