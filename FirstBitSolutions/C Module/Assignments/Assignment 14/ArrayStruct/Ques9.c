//9. Complex (real, imaginary)
#include<stdio.h>
#include<string.h>
typedef struct Complex {
	float real;
	float imaginary;
} Complex;
void StoreComplex(Complex*,int );
void DisplayComplex(Complex*,int );
void main() {
	int a=2;
	Complex c[a];
	StoreComplex(c,a);
	DisplayComplex(c,a);
}
void StoreComplex(Complex* c,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for Complex %d :",i+1);
		printf("Real :");
		scanf("%f",&c[i].real);
		printf("Imaginary :");
		scanf("%f",&c[i].imaginary);
	}
}
void DisplayComplex(Complex* c,int s) {
	for(int i=0; i<s; i++) {
		printf("\nReal=%f",c[i].real);
		printf("\nImaginary=%f",c[i].imaginary);
		printf("\nComplex=%.2f + %.2f",c[i].real,c[i].imaginary);
	}
}