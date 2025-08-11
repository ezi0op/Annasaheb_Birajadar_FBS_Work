//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include <stdio.h>
int Tmarks();
float Percent();
void main()
{
	int TotalMarks=Tmarks();
	float Percentage=Percent(); 
	
	printf("The Total Marks are %d and The Percentage of the whole marks is %f",TotalMarks,Percentage);
	
}
int Tmarks(){
	int a=80;
	int b=56;
	int c=87;
	int d=82;
	int e=89;
	int TotalMarks;
	return a+b+c+d+e;
}
float Percent(){
	
	int total=Tmarks();
	
	return (total/100)*100;
	
	
}