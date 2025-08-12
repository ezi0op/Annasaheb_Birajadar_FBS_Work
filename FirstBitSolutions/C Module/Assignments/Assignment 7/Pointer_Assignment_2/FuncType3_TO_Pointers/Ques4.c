//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include <stdio.h>
void Marks(int*);//Declaration
void main() {
	int marks=65;
	Marks(&marks);//Call
}//main ends here
void Marks(int* M) {


	if(*M>=75) {
		printf("Distinction");
	} else {
		if(*M>=65)
			printf("First Class");
		else if(*M>=55)
			printf("Second Class");

		else if(*M>=40)
			printf("Pass");
		else
			printf("Fail");

	}
}//Marks ends here