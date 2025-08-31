//10. Product (id, name, quantity, price)
#include<stdio.h>
#include<string.h>
typedef struct Product {
	int Product_id;
	char Product_name[20];
	int Product_quantity;
	int Product_price;
} Product;
Product StoreProduct();
void DisplayProduct(Product );  
void main() {
	Product p1,p2,p3;
	printf("\nEnter details for Product 1 :\n");
	p1=StoreProduct();
	DisplayProduct(p1);

	printf("\nEnter details for Product 2 :\n");
	p2=StoreProduct();
	DisplayProduct(p2);

	printf("\nEnter details for Product 3 :\n");
	p3=StoreProduct();
	DisplayProduct(p3);
}
Product StoreProduct() {
	Product temp;
	printf("Product_id :");
	scanf("%d",&temp.Product_id);
	printf("Product_name :");
	scanf("%s",temp.Product_name);
	printf("Product_quantity :");
	scanf("%d",&temp.Product_quantity);
	printf("Product_price :");
	scanf("%d",&temp.Product_price);
	return temp;
}
void DisplayProduct(Product p) {
	printf("\nProduct_id=%d",p.Product_id);
	printf("\nProduct_name=%s",p.Product_name);
	printf("\nProduct_quantity=%d",p.Product_quantity);
	printf("\nProduct_price=%d",p.Product_price);
}
