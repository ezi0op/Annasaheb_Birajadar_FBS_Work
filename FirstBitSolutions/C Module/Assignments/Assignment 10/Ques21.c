//strlwr()
#include <string.h>
#include <stdio.h>
void main() {
	char a[] = "Hello";
	char *temp = strdup(a);
	printf("%s", temp);
}