//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include <stdio.h>
int Triangle(int,int,int);//Declaration
void main()
{
	int sides1,sides2,sides3;

	sides1 = 20;
	sides2 = 30;
	sides3 = 40;
	int res=Triangle(sides1,sides2,sides3);//Call
	if(res==1)
		printf("This is an equilateral triangle");
	else if(res==2)
		printf("This is an  isoceles triangle");
	else 
		printf("This is an  scalene triangle");

}//main ends here
int Triangle(int s1,int s2,int s3){


	if(s1 == s2 && s2 == s3)
		return 1;
	else if(s1 == s2 || s3 == s1 || s1==s3)
		return 2;
	else 
		return 3;
}//Triangle ends here
