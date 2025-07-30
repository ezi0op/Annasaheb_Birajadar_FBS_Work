//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include <stdio.h>
void main()
{
	int sides1,sides2,sides3;
	
	sides1 = 20;
	sides2 = 30;
	sides3 = 40;

	if(sides1 == sides2 && sides2 == sides3){
		printf("This is an equilateral triangle");
	}
	else if(sides1 == sides2 || sides3 == sides1 || sides1==sides3){
			printf("This is an  isoceles triangle");
		}
		else if{
			printf("This is an  scalene triangle");
		}
		
}