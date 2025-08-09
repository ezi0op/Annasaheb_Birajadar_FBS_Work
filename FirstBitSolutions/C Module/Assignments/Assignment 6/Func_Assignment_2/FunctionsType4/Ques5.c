//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include <stdio.h>
int Discount(int,int,char);//Declaration
void main() {
	double price,discount;
	char isstudent = 'Y';
	price = 600;
	discount = 0 ;
	int Tprice=Discount(price,discount,isstudent);//Call
	printf("Final Price of the Customer  will be %d",Tprice);
}//main ends here
int Discount(int p,int d,char S) {
	
	if(S == 'Y') {
		if(p>500) {
			d = p*0.20;
		} else {
			d * 0.10;
		}
	} else {
		if(p>600) {
			d = p*0.20;
			
		} else {
			d=0;
		}
	}
	return p-d;


}//Discount ends here
