//memmove
#include <string.h>
#include <stdio.h>
void main() {
	char a[] = "HelloWorld";
	memmove(a + 2, a, 5);
	printf("%s ", a);
}