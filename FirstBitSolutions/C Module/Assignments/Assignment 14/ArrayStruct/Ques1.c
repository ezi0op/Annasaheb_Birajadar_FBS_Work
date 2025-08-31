//1. Student (rollNo, name, marks)
#include<stdio.h>
typedef struct student {
	int RollNo;
	char Name[20];
	int Marks;
} student;
void StoreStudent(student*,int );
void  DisplayStudent(student*, int );
void main() {
	int a=3;
	student s[a];
	StoreStudent(s,a);
	DisplayStudent(s,a);
}
void StoreStudent(student* ptr,int s) {
	for(int i=0; i<s; i++) {
		printf("\nEntered the details student %d",i+1);
		printf("RollNo :");
		scanf("%d",&ptr[i].RollNo);
		printf("Name :");
		scanf("%s",ptr[i].Name);
		printf("Marks :");
		scanf("%d",&ptr[i].Marks);
	}
}
void  DisplayStudent(student* ptr, int s) {
	for(int i=0; i<s; i++) {
		printf("\nRollNo :%d",ptr[i].RollNo);
		printf("\nName :%s",ptr[i].Name);
		printf("\nMarks :%d",ptr[i].Marks);
	}
}