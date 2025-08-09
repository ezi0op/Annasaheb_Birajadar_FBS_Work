//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include <stdio.h>
void Triangle(int,int,int);//Declaration
void main()
{
	int sides1,sides2,sides3;

	sides1 = 20;
	sides2 = 30;
	sides3 = 40;
	Triangle(sides1,sides2,sides3);//Call

}//main ends here
void Triangle(int s1,int s2,int s3){


	if(s1 == s2 && s2 == s3){
		printf("This is an equilateral triangle");
	}
	else if(s1 == s2 || s3 == s1 || s1==s3){
			printf("This is an  isoceles triangle");
		}
		else {
			printf("This is an  scalene triangle");
		}
}//Triangle ends here
