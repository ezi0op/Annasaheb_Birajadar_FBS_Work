//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include <stdio.h>
void BasicSalary(doouble);//Declaration
void main()
{		
	double bs = 5000;
	
	BasicSalary(bs);//Call
}//main ends here
void BasicSalary(double b){

	double da,ta,hra,TS;
	if(b < 5000)
	{	
		da = b *0.10;
		ta = b *0.15;
		hra = b*0.20;
		TS = da+ta+hra;
		printf("Total Salaray will be %lf", TS);
	}
	else
	{
		da = b *0.15;
		ta = b *0.25;
		hra = b*0.30;
		TS = da+ta+hra;
		printf("Total Salaray will be %lf", TS);
	}
}//BasicSalary ends here