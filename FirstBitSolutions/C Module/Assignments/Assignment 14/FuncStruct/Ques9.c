//9. Complex (real, imaginary)
#include<stdio.h>
#include<string.h>
typedef struct Complex {
	float real;
	float imaginary;
} Complex;
Complex StoreComplex();
void DisplayComplex(Complex );
void main() {
	Complex c1,c2,c3;
	printf("\nEnter details for Complex 1 :\n");
	c1=StoreComplex();
	DisplayComplex(c1);

	printf("\nEnter details for Complex 2 :\n");
	c2=StoreComplex();
	DisplayComplex(c2);

	printf("\nEnter details for Complex 3 :\n");
	c3=StoreComplex();
	DisplayComplex(c3);

}
Complex StoreComplex() {
	Complex temp;
	printf("Real :");
	scanf("%f",&temp.real);
	printf("Imaginary :");
	scanf("%f",&temp.imaginary);
	return temp;
}
void DisplayComplex(Complex c) {
	printf("\nReal=%f",c.real);
	printf("\nImaginary=%f",c.imaginary);
	printf("\nComplex 2: %.2f + %.2fi", c.real, c.imaginary);

}