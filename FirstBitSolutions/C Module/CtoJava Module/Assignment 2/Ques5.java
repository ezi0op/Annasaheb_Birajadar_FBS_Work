class Ques{ 
public static void main(String args[]){ 
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
		System.out.printf("Final Price of the Customer  will be %f",Tprice);
	}else{
		System.out.printf("Final Price of the Customer with %f discount will be %f",Tprice,discount);
	}

	 }
 }