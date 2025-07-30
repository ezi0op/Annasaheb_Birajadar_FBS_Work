//Que 1. Convert the time entered in hh,min and sec into total seconds.

#include <stdio.h>
void main()
{
	int hh,min,sec;
	int TS;
	
	hh=4;
	min=30;
	sec=30;
	
 	TS = (hh*3600)+(min*60)+(60);
 	
 	printf("Total seconds are %d", TS);
}