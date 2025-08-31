//4. Point of Sale System: Build a simple point of sale system using structures to
//represent products with attributes like name, price, and quantity. Allow users
//to add items to a cart and calculate the total cost.
#include<stdio.h>
typedef struct product {
	char name[20];
	double price;
	int quantity;
} product;
void StoreSales(product*,int );
void DisplaySales(product*,int );
void Additems(product*,int );
void TotalCost(product*,int );
void main() {
	int a=3;
	product p[a];
	StoreSales(p,a);
	DisplaySales(p,a);
	Additems(p,a);
	DisplaySales(p,a);
	TotalCost(p,a);
}
void TotalCost(product* s,int a) {
	for(int i=0; i<a; i++) {
		double Total=s[i].price*s[i].quantity;
		printf("\nTotalCost of Product %d is :%.2lf",i,Total);
	}
}
void Additems(product* s,int a) {
	int id;
	printf("\nEnter the Product number to update  :");
	scanf("%d",&id);

	if(id<1&&id>a) {
		printf("Invalid Product Number\n");
	}
	printf("\nUpdating The Product List %d",id);
	printf("\nProduct Name:");
	scanf("%s",s[id].name);
	printf("\nPrice :");
	scanf("%lf",&s[id].price);
	printf("\nQuantity:");
	scanf("%d",&s[id].quantity);
	printf("\nUpdated Successfully :");

}
void StoreSales(product* s,int a) {
	for(int i=0; i<a; i++) {
		printf("Enter details to add items to cart %d",i+1);
		printf("\nProduct Name:");
		scanf("%s",s[i].name);
		printf("Price :");
		scanf("%lf",&s[i].price);
		printf("Quantity:");
		scanf("%d",&s[i].quantity);
	}
}
void DisplaySales(product* s,int a) {
	for(int i=0; i<a; i++) {
		printf("\nEntered details to add items to cart :");
		printf("\nProduct Name:%s",s[i].name);
		printf("\nPrice :%.2lf",s[i].price);
		printf("\nQuantity:%d",s[i].quantity);
	}
}