//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include <stdio.h>
void main()
{
	
	double price,Tprice,discount;
 	char isstudent = 'Y';
 	price = 400;
	discount = 0 ;
	if(isstudent == 'Y')
	{
		if(price>500)
		{			
			discount = price*0.20;
			Tprice = price-discount;
		}
		else
		{
			Tprice = price - price * 0.10;
		}
	}
	else
	{
		if(price>600)
		{
			discount = price*0.20;
			Tprice = price-discount;
		}
		else
		{
			Tprice = price;
		}
	
	}
	if(discount == 0){
		printf("Final Price of the Customer  will be %lf",Tprice);
	}else{
		printf("Final Price of the Customer with %lf discount will be %lf",Tprice,discount);
	}
	
}