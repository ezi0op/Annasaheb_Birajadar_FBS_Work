//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include <stdio.h>
int Discount();//Declaration
void main() {
	int Tprice=Discount();//Call
	printf("Final Price of the Customer  will be %lf",Tprice);
}//main ends here
int Discount() {

	int price,Tprice,discount;
	char isstudent = 'Y';
	price = 400;
	discount = 0 ;
	if(isstudent == 'Y') {
		if(price>500) {
			discount = price*0.20;
			Tprice = price-discount;
		} else {
			Tprice = price - price * 0.10;
		}
	} else {
		if(price>600) {
			discount = price*0.20;
			Tprice = price-discount;
		} else {
			Tprice = price;
		}
	}
	return Tprice;
}//Discount ends here