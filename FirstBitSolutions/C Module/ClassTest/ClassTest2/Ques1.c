//Que 1. WAP to calculate electricity bill For 
//1-50 units 50 rs/unit. 30 rs/unit, For 51-150 units - 40 rs/unit, For 151and above units- 50 rs/unit.
#include<stdio.h>
void ElectricityBill();//Declaration
void main(){
	ElectricityBill();//call
}//main ends here
void ElectricityBill(){
	int unit,bill;
	printf("Enter your Billing Units: ");
	scanf("%d",&unit);
	if(unit>=1&&unit<=50){
		bill=unit*30;
		printf("%drs",bill);
	}else if(unit>=51&&150<=unit){
		bill=unit*40;
		printf("%drs",bill);
	}else if(unit<=151){
		bill=unit*50;
		printf("%drs",bill);
	}else{
		printf("Entered unit is Invalid!");
	}
}//ElectricityBill