//MinandMax
#include<stdio.h>
typedef struct student {
	int id;
	char name[20];
	int marks;
}student;
void StoreStudent(student* ,int );
void MinMarksStudent(student* ,int );
void MaxMarksStudent(student*,int);
void main(){
	int a=3;
	student s[a];
	StoreStudent(s,a);
	MinMarksStudent(s,a);
	MaxMarksStudent(s,a);
}
void MinMarksStudent(student* a,int b){
	int MinMarks=a[0].marks;
	int index=0;
	for(int i=0;i<b;i++){
		if(a[i].marks<MinMarks){
			MinMarks=a[i].marks;
			index=i;
		}
	}
	printf("lowest marks of the student %d is %d",index,a[index].marks);
}
void MaxMarksStudent(student* a,int b){
	int MaxMarks=a[0].marks;
	int index=0;
	for(int i=0;i<b;i++){
		if(a[i].marks>MaxMarks){
			MaxMarks=a[i].marks;
			index=i;
		}
	}
	printf("\nHighest marks of the student %d is %d",index,a[index].marks);
}
void StoreStudent(student* x,int y){
	for(int i=0;i<y;i++){
		printf("Enter the details of students %d",i+1);
		printf("\nID :");
		scanf("%d",&x[i].id);
		printf("Name :");
		scanf("%s",x[i].name);
		printf("Marks :");
		scanf("%d",&x[i].marks);
	}
}
