//1. Student (rollNo, name, marks)
#include<stdio.h>
#include<string.h>
struct student {
	int rollno;
	char name[20];
	int marks;
};
void main() {
	struct student s1,s2,s3;
	printf("\nEnter details for student 1 :\n");

	s1.rollno=101;
	strcpy(s1.name,"fbs");
	s1.marks=75;

	printf("\nRollno=%d",s1.rollno);
	printf("\nName=%s",s1.name);
	printf("\nMarks=%d",s1.marks);

	printf("\nEnter details for student 2 :\n");

	scanf("%d",&s2.rollno);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	printf("\nRollno=%d",s2.rollno);
	printf("\nName=%s",s2.name);
	printf("\nMarks=%d",s2.marks);

	printf("\nEnter details for student 3 :\n");

	scanf("%d",&s3.rollno);
	scanf("%s",s3.name);
	scanf("%d",&s3.marks);
	printf("\nRollno=%d",s3.rollno);
	printf("\nName=%s",s3.name);
	printf("\nMarks=%d",s3.marks);
}