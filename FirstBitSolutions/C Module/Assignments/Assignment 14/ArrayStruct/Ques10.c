//10. Product (id, name, quantity, price)
#include<stdio.h>
#include<string.h>
typedef struct Product {
	int Product_id;
	char Product_name[20];
	int Product_quantity;
	int Product_price;
} Product;
void StoreProduct(Product*,int );
void DisplayProduct(Product*,int );
void main() {
	int a=2;
	Product p[a];
	StoreProduct(p,a);
	DisplayProduct(p,a);

}
void StoreProduct(Product* p,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEnter details for Product %d :",i+1);
		printf("\nProduct_id :");
		scanf("%d",&p[i].Product_id);
		printf("Product_name :");
		scanf("%s",p[i].Product_name);
		printf("Product_quantity :");
		scanf("%d",&p[i].Product_quantity);
		printf("Product_price :");
		scanf("%d",&p[i].Product_price);
	}
}
void DisplayProduct(Product* p,int s) {
	for(int i=0; i<s; i++) {
		printf("\nProduct_id=%d",p[i].Product_id);
		printf("\nProduct_name=%s",p[i].Product_name);
		printf("\nProduct_quantity=%d",p[i].Product_quantity);
		printf("\nProduct_price=%d",p[i].Product_price);
	}
}