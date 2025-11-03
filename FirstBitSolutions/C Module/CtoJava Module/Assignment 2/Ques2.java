class Ques{ 
public static void main(String args[]){ 

	int sides1,sides2,sides3;

	sides1 = 20;
	sides2 = 30;
	sides3 = 40;

	if(sides1 == sides2 && sides2 == sides3) {
		System.out.printf("This is an equilateral triangle");
	} else if(sides1 == sides2 || sides3 == sides1 || sides1==sides3) {
		System.out.printf("This is an  isoceles triangle");
	} else {
	System.out.printf("This is an  scalene triangle");
	}
	 }
 }