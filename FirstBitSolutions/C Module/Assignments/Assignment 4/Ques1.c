//1. Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void main()
{
	for(int k=1;k<=10000;k++){
		int no=k;
		int temp=no;
		int count=0;
		while(no>0){
			count++;
			no=no/10;
		}
		no=temp;
		int sum=0,rem;
		int res;
		while(no>0){
			rem=no%10;
			res =1;
			for(int i=1;i<=count;i++)
				
				res=res*rem;
			
				sum=sum+res;
				no=no/10;
			
		}
		if(sum==temp)
		printf("%d are armstrong numbers\n",temp);
	}

}


