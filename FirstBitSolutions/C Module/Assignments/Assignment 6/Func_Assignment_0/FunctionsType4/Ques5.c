//5. Write a C program to input five numbers and find their average.
#include <stdio.h>
int Aver(int,int,int,int,int);
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int e=60;
	int Averg=Aver(a,b,c,d,e);
		printf("Average of numbers is %d",Averg);
}
int Aver(int a,int b,int c,int d,int e){
	return a+b+c+d+e/2;
	

}