//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include <stdio.h>
void Discount(int*,int*,char*);//Declaration
void main() {
	double price,discount;
	char isstudent = 'Y';
	price = 400;
	discount = 0 ;
	Discount(price,discount,isstudent);//Call
}//main ends here
void Discount(int p,int d,char S) {
	
	double Tprice;

	if(S == 'Y') {
		if(p>500) {
			d = p*0.20;
			Tprice = p-d;
		} else {
			Tprice = p - p * 0.10;
		}
	} else {
		if(p>600) {
			d = p*0.20;
			Tprice = p-d;
		} else {
			Tprice = p;
		}
	}
	if(d == 0) {
		printf("Final Price of the Customer  will be %lf",Tprice);
	} else {
		printf("Final Price of the Customer with %lf discount will be %lf",Tprice,d);
	}
}//Discount ends here