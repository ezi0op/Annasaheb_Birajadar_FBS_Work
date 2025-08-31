//5. Movie Database: Create a program that uses structures to manage a movie
//database with details like title, director, release year, and genre. Allow users
//to add, search for, and update movie records.
#include<stdio.h>
#include<string.h>
typedef struct movie {
	char title[20];
	char director[20];
	int ReleaseYear;
	int genre;
} movie;
void StoreMovie(movie*,int );
void DisplayMovie(movie*,int );
void UpdateMovie(movie*,int );
void SearchMovie(movie*,int );
void AddMovie(movie*,int );
void main() {
	int s=2;
	movie m[s];
	StoreMovie(m,s);
	DisplayMovie(m,s);
	int choice = 0;
	while (choice != 4) {
		printf("\n=== Menu-Driven Program ===\n");
		printf("1. Add Record\n");
		printf("2. Search Record\n");
		printf("3. Update Record\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		if (choice == 1) {
			AddMovie(m,s);
		} else if (choice == 2) {
			SearchMovie(m,s);
		} else if (choice == 3) {
			UpdateMovie(m,s);
			DisplayMovie(m,s);
		} else if (choice == 4) {
			printf("Exiting program.\n");
		} else {
			printf("Invalid choice!\n");
		}
	}
}
void AddMovie(movie* a,int b) {
	int n;
	printf("\nHow many Movies you want to add?  :");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("Enter the Movie Details %d :",i+1);
		printf("\nTitle :");
		scanf("%s",a[b+i].title);
		printf("Director :");
		scanf("%s",a[b+i].director);
		printf("ReleaseYear :");
		scanf("%d",&a[b+i].ReleaseYear);
		printf("Genre :");
		scanf("%d",&a[b+i].genre);
	}
	printf("%d new Movies added successfully :\n",n);
}
void SearchMovie(movie*a,int b) {
	char id[20];
	printf("\nEnter the Movie title to search  :");
	scanf("%s",id);
	int found=1;
	for(int i=0; i<b; i++) {
		if(strcmp(a[i].title,id)==0) {
			printf("Movie title found!");
			found=0;
			printf("\nTitle :%s",a[i].title);
			printf("\nDirector :%s",a[i].director);
			printf("\nReleaseYear :%d",a[i].ReleaseYear);
			printf("\nGenre :%d",a[i].genre);
		}
	}
	if(found==1) {
		printf("employee not found :");
	}
}
void UpdateMovie(movie* a,int b) {
	char id[20];
	printf("\nEnter the Movie title to update  :");
	scanf("%s",id);
	int found=1;
	for(int i=0; i<b; i++) {
		if(strcmp(a[i].title,id)==0) {
			found=0;
			printf("\nUpdate Movie Details of %s :",id);
			printf("\nDirector :");
			scanf("%s",a[i].director);
			printf("ReleaseYear :");
			scanf("%d",&a[i].ReleaseYear);
			printf("Genre :");
			scanf("%d",&a[i].genre);
		}
	}
	if(found==1) {
		printf("Invalid Movie Title!");
	}

}
void StoreMovie(movie* a,int b) {
	for(int i=0; i<b; i++) {
		printf("Enter the Movie Details %d :",i+1);
		printf("\nTitle :");
		scanf("%s",a[i].title);
		printf("Director :");
		scanf("%s",a[i].director);
		printf("ReleaseYear :");
		scanf("%d",&a[i].ReleaseYear);
		printf("Genre :");
		scanf("%d",&a[i].genre);
	}
}
void DisplayMovie(movie* a,int b) {
	for(int i=0; i<b; i++) {
		printf("\nEntered details of the  Movie :");
		printf("\nTitle :%s",a[i].title);
		printf("\nDirector :%s",a[i].director);
		printf("\nReleaseYear :%d",a[i].ReleaseYear);
		printf("\nGenre :%d",a[i].genre);
	}
}