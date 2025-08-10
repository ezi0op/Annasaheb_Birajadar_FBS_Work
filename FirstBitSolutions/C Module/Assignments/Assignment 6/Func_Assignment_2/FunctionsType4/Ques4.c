//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include <stdio.h>
int pass(int);//Declaration
void main() {
	int marks=65;
	int res=pass(marks);//Call
		if(res==1) 
		printf("Distinction");
	 else 
		if(res==2) 
			printf("First Class");
		else 
			if(res==3) 
				printf("Second Class");

			 else 
				if(res==4) 
					printf("Pass");
				 else 
					printf("Fail");
				
			
		
	
}//main ends here
int pass(int M) {
	

	if(M>=75) {
		return 1;
	} else {
		if(M>=65) {
			return 2;
		} else {
			if(M>=55) {
				return 3;

			} else {
				if(M>=40) {
					return 4;
				} else {
					return 5;
				}
			}
		}
	}
}//Marks ends here