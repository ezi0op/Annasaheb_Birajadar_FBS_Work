//3. Print perfect numbers in the given range 1 to n.
#include<stdio.h>
void main()
{
	for(int j=1;j<=5000;j++){
		int n=j;
		int sum,i;
		sum = 0;
	
	for(i=1;i<n;i++){
		if(n%i==0){
			sum +=i;
		}	
	}
	if(sum==n && n !=1){
		printf("%d is Perfect number\n",n);
	}	
	}

}