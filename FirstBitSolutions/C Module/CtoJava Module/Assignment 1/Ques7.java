class Ques{

public static void main(String args[]){
	double bs = 5000;
	double da,ta,hra,TS;
	
	if(bs < 5000)
	{	
		da = bs *0.10;
		ta = bs *0.15;
		hra = bs*0.20;
		TS = da+ta+hra;
		System.out.printf("Total Salaray will be %f", TS);
	}
	else
	{
		da = bs *0.15;
		ta = bs *0.25;
		hra = bs*0.30;
		TS = da+ta+hra;
		System.out.printf("Total Salaray will be %f", TS);
	}

         }
}