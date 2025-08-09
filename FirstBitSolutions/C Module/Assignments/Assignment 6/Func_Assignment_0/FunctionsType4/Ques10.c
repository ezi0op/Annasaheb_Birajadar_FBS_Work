//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include <stdio.h>
void main()
{
	int a=80;
	int b=56;
	int c=87;
	int d=82;
	int e=89;
	
	int TotalMarks;
	double Percentage;
	
	TotalMarks = a+b+c+d+e;
	Percentage = (TotalMarks/100)*100;
	
	printf("The Total Marks are %d and The Percentage of the whole marks is %f",TotalMarks,Percentage);
	
}