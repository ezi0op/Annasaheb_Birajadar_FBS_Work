//memcmp()
#include <string.h>
#include <stdio.h>
void main() {
	char a[] = "apple";
	char b[] = "apricot";
	printf("%d ", memcmp(a, b, 3));
}