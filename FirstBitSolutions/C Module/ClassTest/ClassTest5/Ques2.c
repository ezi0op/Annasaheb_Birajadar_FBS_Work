//2. WAP to initialize some amount in your account. Then give choice to user for deposit or withdraw. 
//and display updated amount. 
//Condition to withdraw (if the balance is less than 3000 display 
//can't withdraw the amount balance is not sufficient).
//(using function) 
#include<stdio.h>
int Withdraw(int ,int ,int ,int );
void main(){
	int balance=10234,deposit,withdraw;
	int option;
	printf("Enter your option no\n 1.Withdraw\n2.Deposit :");
	scanf("%d",&option);
	if(balance<=3000 && option==1)
		printf("Insufficient balance");
	else{
		printf("Enter the amount:");
		if(option==1)
			scanf("%d",&withdraw);
		else
			scanf("%d",&deposit);
	int res=Withdraw(balance,deposit,withdraw,option);
	printf("Updated balance is %d: ",res);
	}

}
int Withdraw(int B,int D,int W,int O){
	if(O==1){
			B=B-W;
	}else{
		B= D+B;
	}
	return B;
}