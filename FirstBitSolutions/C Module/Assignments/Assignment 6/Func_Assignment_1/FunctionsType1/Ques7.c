//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include <stdio.h>
void BasicSalary();//Declaration
void main()
{
 BasicSalary();//Call
}//main ends here
void BasicSalary(){
		double bs = 5000;
	double da,ta,hra,TS;
	
	if(bs < 5000)
	{	
		da = bs *0.10;
		ta = bs *0.15;
		hra = bs*0.20;
		TS = da+ta+hra;
		printf("Total Salaray will be %lf", TS);
	}
	else
	{
		da = bs *0.15;
		ta = bs *0.25;
		hra = bs*0.30;
		TS = da+ta+hra;
		printf("Total Salaray will be %lf", TS);
	}
}//BasicSalary ends here