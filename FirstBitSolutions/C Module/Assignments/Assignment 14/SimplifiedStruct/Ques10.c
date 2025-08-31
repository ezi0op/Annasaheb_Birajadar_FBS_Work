//10. Product (id, name, quantity, price)
#include<stdio.h>
#include<string.h>
struct Product {
	int Product_id;
	char Product_name[20];
	int Product_quantity;
	int Product_price;
};
void main() {
	struct Product p1,p2,p3;
	printf("\nEnter details for Product 1 :\n");
	p1.Product_id=101;
	strcpy(p1.Product_name,"fbs");
	p1.Product_quantity=7500;
	p1.Product_price=2000;
	printf("\nProduct_id=%d",p1.Product_id);
	printf("\nProduct_name=%s",p1.Product_name);
	printf("\nProduct_quantity=%d",p1.Product_quantity);
	printf("\nProduct_price=%d",p1.Product_price);
	
	printf("\nEnter details for Product 2 :\n");
	printf("\nProduct_id :");
	scanf("%d",&p2.Product_id);
	printf("Product_name :");
	scanf("%s",p2.Product_name);
	printf("Product_quantity :");
	scanf("%d",&p2.Product_quantity);
	printf("Product_price :");
	scanf("%d",&p2.Product_price);
	printf("\nProduct_id=%d",p2.Product_id);
	printf("\nProduct_name=%s",p2.Product_name);
	printf("\nProduct_quantity=%d",p2.Product_quantity);
	printf("\nProduct_price=%d",p2.Product_price);
	
	printf("\nEnter details for Product 3 :\n");
	printf("\nProduct_id :");
	scanf("%d",&p3.Product_id);
	printf("Product_name :");
	scanf("%s",p3.Product_name);
	printf("Product_quantity :");
	scanf("%d",&p3.Product_quantity);
	printf("Product_price :");
	scanf("%d",&p3.Product_price);
	printf("\nProduct_id=%d",p3.Product_id);
	printf("\nProduct_name=%s",p3.Product_name);
	printf("\nProduct_quantity=%d",p3.Product_quantity);
	printf("\nProduct_price=%d",p3.Product_price);
}