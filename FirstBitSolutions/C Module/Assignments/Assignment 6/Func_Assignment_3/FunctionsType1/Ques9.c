//9 Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void Palllindrome();//Declaration
void main()
{
	Palllindrome();//Call
}//main ends here
void Palllindrome(){
	int n=689,no,rem,rev=0;
	int temp = n;
	
	while(no>0){
		rem = no%10;
		no = no / 10;
		rev = rev*10+rem;

	}
	if(temp == rev){
		printf("This is Palindrome number");
	}else{
		printf("This is not Palindrome number");
	}
}//Pallindrome ends here
