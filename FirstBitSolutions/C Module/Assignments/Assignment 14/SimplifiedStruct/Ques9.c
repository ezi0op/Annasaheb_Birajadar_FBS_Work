//9. Complex (real, imaginary)
#include<stdio.h>
#include<string.h>
struct Complex {
	float real;
	float imaginary;
};
void main() {
	struct Complex c1,c2,c3;
	c1.real=101;
	c1.imaginary=75;
	printf("\nReal=%f",c1.real);
	printf("\nImaginary=%f",c1.imaginary);
	printf("\nComplex=%.2f + %fi",c1.real,c1.imaginary);
	
	printf("\nEnter details for Complex 2 :\n");
	printf("Real :");
	scanf("%f",&c2.real);
	printf("Imaginary :");
	scanf("%f",&c2.imaginary);
	printf("\nReal=%f",c2.real);
	printf("\nImaginary=%f",c2.imaginary);
	printf("\nComplex 2: %f + %fi", c2.real, c2.imaginary);
	
	printf("\nEnter details for Complex 3 :\n");
	printf("Real :");
	scanf("%f",&c3.real);
	printf("Imaginary :");
	scanf("%f",&c3.imaginary);
	printf("\nReal=%f",c3.real);
	printf("\nImaginary=%f",c3.imaginary);
	printf("\nComplex 2: %f + %fi", c3.real, c3.imaginary);
}