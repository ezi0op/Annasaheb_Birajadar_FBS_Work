//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include <stdio.h>
int Triangle();//Declaration
void main()
{
	int res=Triangle();//Call
	if(res==1){
		printf("This is an equilateral triangle");
	}else if(res==-1){
		printf("This is an  isoceles triangle");
	}else{
		printf("This is an  scalene triangle");
	}
}//main ends here
int Triangle(){
	int sides1,sides2,sides3;

	sides1 = 20;
	sides2 = 20;
	sides3 = 20;

	if(sides1 == sides2 && sides2 == sides3){
		return 1;
	}
	else if(sides1 == sides2 || sides3 == sides1 || sides1==sides3){
			return -1;
		}
		else {
			return 0;
		}
}//Triangle ends here