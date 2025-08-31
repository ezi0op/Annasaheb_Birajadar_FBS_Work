//1. Create a structure Book with data members as bname, id, author, price. Accept the
//values of all these members from user and display them.
#include<stdio.h>
typedef struct Book {
	char bname[20];
	int id;
	char author[20];
	int price;
} Book;
void StoreBook(Book* ,int );
void DisplayBook(Book* ,int );
void main() {
	int a=2;
	Book b[a];
	StoreBook(b,a);
	DisplayBook(b,a);
}
void StoreBook(Book* x,int s) {
	for(int i=0; i<s; i++) {
		printf("Enter the details for BOOK %d",i+1);
		printf("\nBname :");
		scanf("%s",x[i].bname);
		printf("ID :");
		scanf("%d",&x[i].id);
		printf("Author :");
		scanf("%s",x[i].author);
		printf("Price :");
		scanf("%d",&x[i].price);
	}
}
void DisplayBook(Book* x,int s){
		for(int i=0; i<s; i++) {
		printf("Enter the details for BOOK %d",i+1);
		printf("\nBname :%s",x[i].bname);
		printf("\nID :%d",x[i].id);
		printf("\nAuthor :%s",x[i].author);
		printf("\nPrice :%d",x[i].price);
	}
}