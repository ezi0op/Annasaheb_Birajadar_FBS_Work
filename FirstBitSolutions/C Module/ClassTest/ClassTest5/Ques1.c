//1. WAP to calculate selling price of book based on cost price and discount.
//(using function and nested if else)
#include<stdio.h>
double Discount(double ,double ,double );
void main() {
	double price,Tprice,discount;
	printf("Enter the price of the book:");
	scanf("%d",&price);
	double res=Discount(price,Tprice,discount);
	printf("The total price of the product after discount will be %d",res);
}
double Discount(double p,double tp,double d) {
	if(p<=500) {
		d = p * 0.25;
	}else if(p<=600){
		d = p * 0.60;
	}else if(p<=0.80){
		d = p * 0.90;
	}else{
		d = p;
	}
	return p - d;

}