//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include <stdio.h>
int BasicSalary(double);//Declaration
void main()
{		
	double bs = 5000;
	double da,ta,hra,TS;
	
	double res=BasicSalary(bs);//Call
	if(res)
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
}
int BasicSalary(double b){
	return b <= 5000;
}//BasicSalary ends here