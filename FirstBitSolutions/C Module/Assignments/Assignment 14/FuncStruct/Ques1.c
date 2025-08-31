//1. Student (rollNo, name, marks)
#include<stdio.h>
#include<string.h>
typedef struct student {
	int rollno;
	char name[20];
	int marks;
} student;
student StoreStudent();
void DisplayStudent(student );
void main() {
	student s1,s2,s3;

	printf("\nEnter details for student 1 :\n");
	s1=	StoreStudent();
	DisplayStudent(s1);

	printf("\nEnter details for student 2 :\n");
	s2=StoreStudent();
	DisplayStudent(s2);

	printf("\nEnter details for student 3 :\n");
	s3=StoreStudent();
	DisplayStudent(s3);

}
student StoreStudent() {
	student temp;
	printf("Rollno :");
	scanf("%d",&temp.rollno);
	printf("Name :");
	scanf("%s",temp.name);
	printf("Marks :");
	scanf("%d",&temp.marks);
	return temp;
}
void DisplayStudent(student s) {
	printf("\nRollno :%d",s.rollno);
	printf("\nName :%s",s.name);
	printf("\nMarks :%d",s.marks);
}