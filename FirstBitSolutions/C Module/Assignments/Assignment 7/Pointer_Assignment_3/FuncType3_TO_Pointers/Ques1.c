// 1 Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
void Numbers(int*);//Declaration
void main() {
	int i=1;
	Numbers(&i);//Call
}//main ends here
void Numbers(int* a) {
	while(*a<=10){
		printf("\n%d",*a);
	(*a)++;
}
}//Numbers ends here