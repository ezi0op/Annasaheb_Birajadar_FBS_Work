//8. Write a C program to input the length and width of a rectangle and find its perimeter.
#include <stdio.h>
int Peri(int,int);
void main()
{
	int l=5;
	int w=8;
	int res=	Peri(l,w);
	printf("The Perimeter is %d", res);
}
int Peri(int l,int w){

	
	return 2*(l+w);

}