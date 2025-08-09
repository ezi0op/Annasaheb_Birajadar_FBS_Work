//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include <stdio.h>
void Marks();//Declaration
void main() {
	Marks();//Call
}//main ends here
void Marks() {
	int marks=65;

	if(marks>=75) {
		printf("Distinction");
	} else {
		if(marks>=65) {
			printf("First Class");
		} else {
			if(marks>=55) {
				printf("Second Class");

			} else {
				if(marks>=40) {
					printf("Pass");
				} else {
					printf("Fail");
				}
			}
		}
	}
}//Marks ends here