//sprintf
#include<string.h>
#include<stdio.h>
void main() {
    char buffer[10];
    int a = 10, b = 20;

    sprintf(buffer, "Sum of %d and %d is %d", a, b, a + b);
    printf("%s", buffer);
}