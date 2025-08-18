//strtok
#include <string.h>
#include <stdio.h>
void main() {
	char a[] = "Annasaheb-is-learning-C";
	char *token = strtok(a, "-");
	while (token != '\0') {
		printf("%s ", token);
		token = strtok('\0', "-");
	}
}