class Ques{

public static void main(String args[]){
	int year;
	year =  2020;
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		System.out.printf("It is leaf Year");
	}
	else
	{
		System.out.printf("It is not leaf Year");
	}         }
}