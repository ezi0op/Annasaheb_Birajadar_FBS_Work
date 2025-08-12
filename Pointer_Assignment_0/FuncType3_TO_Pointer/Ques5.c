//5. Write a C program to input five numbers and find their average.
#include <stdio.h>
void Aver(int*,int*,int*,int*,int*);
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int e=60;
	Aver(&a,&b,&c,&d,&e);
}
void Aver(int* a,int* b,int* c,int* d,int* e){
	int Averg;
	Averg=*a+*b+*c+*d+*e/2;
	
	printf("Average of numbers is %d",Averg);
}