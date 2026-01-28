#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student {
	int id;
	char name[20];
	char Class[20];
	double marks;
	int attendence;
} student;
void studentAttendence(student* );
void maximumStudentAttendence(student* );
void minimumStudentAttendence(student* );
void studentMarks(student* );
void highestStudentMarks(student* );
void lowestStudentMarks(student* );
void averageStudentMarks(student* );
void searchByStudentId(student* );
void updateStudent(student* );
void updateStudentClass(student* );
void updateStudentMarks(student* );
void updateStudentAttendence(student* );
void deleteStudent(student*  );
void addStudent(student* );
void storeStudent(student* );
void displayStudent(student* );

int currentindex;

void main() {
	student a[100];
	storeStudent(a);
	int choice;
	printf("====================================================================================================================\n");
	printf("                               Welcome to Student Management System!\n");
	printf("====================================================================================================================\n");
	while (1) {
		printf("\n--------------------------------------- Student Management Menu ------------------------------------------------\n");
		printf("1. Add Student\n");
		printf("2. Display Students\n");
		printf("3. Update Student\n");
		printf("4. Delete Student\n");
		printf("5. Display Sorted Attendance\n");
		printf("6. Display Sorted Marks\n");
		printf("7. Search Student by ID\n");

		printf("8. Exit\n");
		printf("====================================================================================================================\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				addStudent(a);
				break;
			case 2:
				displayStudent(a);
				break;
			case 3:
				updateStudent(a);
				break;
			case 4:
				deleteStudent(a);
				break;
			case 5:
				studentAttendence(a);
				break;
			case 6:
				studentMarks(a);
				break;
			case 7:
				searchByStudentId(a);
				break;

			case 8:
				exit(0);
			default:
				printf("Invalid choice! Try again.\n");
		}
	}

}
void studentAttendence(student* a) {
	int choice;
	while(1) {
		printf("\n================ Sort By Attendence ================\n");
		printf("1.maximumAttendence\n");
		printf("2.MinimumAttendence\n");
		printf("3.Back to Menu\n");
		printf("==============================================\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				maximumStudentAttendence(a);
				break;
			case 2:
				minimumStudentAttendence(a);
				break;
			case 3:
				printf("Returning to main menu....");
				return;
			default:
				printf("Invalid choice ");
				break;
		}
	}
}
void maximumStudentAttendence(student* a) {
	double Highest=a[0].attendence;
	int highIndex=0;
	for(int i=0; i<currentindex; i++) {
		if(a[i].attendence>Highest) {
			Highest=a[i].attendence;
			highIndex=i;
		}
	}
	printf("Highest attendence = %.02lf by %s (ID : %d)\n",Highest,a[highIndex].name,a[highIndex].id);
}
void minimumStudentAttendence(student* a) {
	double lowest=a[0].attendence;
	int lowindex=0;
	for(int i=0; i<currentindex; i++) {
		if(a[i].attendence<lowest) {
			lowest=a[i].attendence;
			lowindex=i;
		}
	}
	printf("Lowest attendence = %.02lf by %s (ID : %d)\n",lowest,a[lowindex].name,a[lowindex].id);
}
void studentMarks(student* a) {
	int choice;
	while(1) {
		printf("\n================ Sort By Marks ================\n");
		printf("1.maximumMarks\n");
		printf("2.MinimumMarks\n");
		printf("3.AverageMarks\n");
		printf("4.Back to Menu\n");
		printf("==============================================\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				highestStudentMarks(a);
				break;
			case 2:
				lowestStudentMarks(a);
				break;
			case 3:
				averageStudentMarks(a);
				break;
			case 4:
				printf("Returning to main menu....");
				return;
			default:
				printf("Invalid choice ");
				break;
		}
	}
}
void highestStudentMarks(student* a) {
	double Highest=a[0].marks;
	int highIndex=0;
	for(int i=0; i<currentindex; i++) {
		if(a[i].marks>Highest) {
			Highest=a[i].marks;
			highIndex=i;
		}
	}
	printf("Highest Marks = %.02lf by %s (ID : %d)\n",Highest,a[highIndex].name,a[highIndex].id);

}
void lowestStudentMarks(student* a) {
	double Lowest=a[0].marks;
	int lowindex=0;
	for(int i=0; i<currentindex; i++) {
		;
		if(a[i].marks<Lowest) {
			Lowest=a[i].marks;
			lowindex=i;
		}
	}
	printf("Lowest Marks = %.02lf by %s (ID : %d)\n",Lowest,a[lowindex].name,a[lowindex].id);

}
void averageStudentMarks(student* a) {
	double sum=0;
	for(int i=0; i<currentindex; i++) {
		sum=sum+a[i].marks;
	}
	double avg=sum/currentindex;
	printf("Average Marks of Students are %.02lf",avg);
}
void searchByStudentId(student* a) {
	int id;
	int found=0;
	printf("Enter the Student-Id to Search");
	scanf("%d",&id);

	for(int i=0; i<currentindex; i++) {
		if(a[i].id==id) {
			found=1;
			printf("Student found!\n");
			printf("Name\tClass\tMarks\tAttendence\n");
			printf("%s\t%s\t%.02lf\t%d\n",a[i].name,a[i].Class,a[i].marks,a[i].attendence);
			return;
		}
	}
	if(found==0) {
		printf("Invalid student id! : ");
	}
}
void updateStudent(student* a) {
	int choice;
	while(1) {
		printf("\n================ Update Student ===================\n");
		printf("1.Update Student Class\n");
		printf("2.Update Student Marks\n");
		printf("3.Update Student Attendence\n");
		printf("4.Back to Menu\n");
		printf("==================================================\n");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				updateStudentClass(a);
				break;
			case 2:
				updateStudentMarks(a);
				break;
			case 3:
				updateStudentAttendence(a);
				break;
			case 4:
				printf("Returning to main menu.......");
				return;
			default:
				printf("Entered Option is Invalid!");
				break;
		}

	}
}
void updateStudentClass(student* a) {
	int id,found=0;
	printf("\n==============================================\n");
	printf("Enter the Student-Id to Update ");
	scanf("%d",&id);
	printf("\n==============================================\n");
	for(int i=0; i<currentindex; i++) {
		if(a[i].id==id) {
			printf("Update Student Class of %d!",id);
			found=1;
			printf("\nClass :");
			scanf("%s",a[i].Class);
			printf("\n============== Student with ID %d Updated Successfully! ==============\n",id);
		}
	}
	if(found==0) {
		printf("\nInvalid Student ID No!\n");
	}
}
void updateStudentMarks(student* a) {
	int id,found=0;
	printf("\n==============================================\n");
	printf("Enter the Student-Id to update ");
	scanf("%d",&id);
	printf("\n==============================================\n");
	for(int i=0; i<currentindex; i++) {
		if(a[i].id==id) {

			printf("Update Student Marks of %d!",id);
			found=1;
			printf("\nMarks :");
			scanf("%lf",&a[i].marks);

			printf("\n============== Student with ID %d Updated Successfully! ==============\n",id);
		}
	}
	if(found==0) {
		printf("\nInvalid Student ID No!\n");
	}
}
void updateStudentAttendence(student* a) {
	int id,found=0;
	printf("\n==============================================\n");
	printf("Enter the Student-Id to update ");
	scanf("%d",&id);
	printf("\n==============================================\n");
	for(int i=0; i<currentindex; i++) {
		if(a[i].id==id) {
			printf("Update Student Attendence of %d!",id);
			found=1;
			printf("\nAttendence :");
			scanf("%d",&a[i].attendence);
			printf("\n============== Student with ID %d Updated Successfully! ==============\n",id);
		}
	}
	if(found==0) {
		printf("\nInvalid Student ID No!\n");
	}
}
void deleteStudent(student* a ) {
	int no;
	printf("\n==============================================\n");
	printf("\nEnter the Student-Id to Delete  :");
	scanf("%d",&no);
	printf("\n==============================================\n");
	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(a[i].id==no) {
			found=0;
			for(int j=i; j<currentindex-1; j++) {
				a[j]=a[j+1];
			}
			currentindex--;
			printf("\n============== Student Deleted Successfully ! ==============\n");
			break;
		}

	}
	if(found==1) {
		printf("Invalid Student id!");
	}

}
void addStudent(student* a) {
	int no;
	printf("\n==============================================\n");
	printf("How many student you want to add in the records ");
	scanf("%d",&no);
	printf("\n==============================================\n");

	for(int i=0; i<no; i++) {
		printf("Enter student details of %d",currentindex+no);
		printf("\nId :");
		scanf("%d",&a[currentindex].id);
		printf("Name :");
		scanf("%s",a[currentindex].name);
		printf("Class :");
		scanf("%s",a[currentindex].Class);
		printf("Marks :");
		scanf("%lf",&a[currentindex].marks);
		printf("Attendence :");
		scanf("%d",&a[currentindex].attendence);

		currentindex++;
		printf("\n============== Student Added Successfully! ==============\n");
	}

}
void storeStudent(student* a) {
	a[0].id=101;
	strcpy(a[0].name,"Amit");
	strcpy(a[0].Class,"CSE-A");
	a[0].marks=65.5;
	a[0].attendence=45;

	a[1].id=102;
	strcpy(a[1].name,"Neha");
	strcpy(a[1].Class,"CSE-A");
	a[1].marks=72.0;
	a[1].attendence=48;

	a[2].id=103;
	strcpy(a[2].name,"Raj");
	strcpy(a[2].Class,"CSE-B");
	a[2].marks=81.5;
	a[2].attendence=50;

	a[3].id=104;
	strcpy(a[3].name,"Priya");
	strcpy(a[3].Class,"CSE-B");
	a[3].marks=59.0;
	a[3].attendence=42;

	a[4].id=105;
	strcpy(a[4].name,"Vikas");
	strcpy(a[4].Class,"CSE-A");
	a[4].marks=91.0;
	a[4].attendence=49;

	a[5].id=106;
	strcpy(a[5].name,"Anita");
	strcpy(a[5].Class,"CSE-C");
	a[5].marks=68.5;
	a[5].attendence=44;

	a[6].id=107;
	strcpy(a[6].name,"Kiran");
	strcpy(a[6].Class,"CSE-C");
	a[6].marks=77.0;
	a[6].attendence=47;

	a[7].id=108;
	strcpy(a[7].name,"Rohit");
	strcpy(a[7].Class,"CSE-B");
	a[7].marks=55.5;
	a[7].attendence=39;

	a[8].id=109;
	strcpy(a[8].name,"Meena");
	strcpy(a[8].Class,"CSE-A");
	a[8].marks=88.0;
	a[8].attendence=51;

	a[9].id=110;
	strcpy(a[9].name,"Sanjay");
	strcpy(a[9].Class,"CSE-C");
	a[9].marks=73.5;
	a[9].attendence=46;

	currentindex=10;

}
void displayStudent(student* a) {
	printf("=========== Student Data Base ===========\n");
	printf("ID\tName\tClass\tMarks\tAttendence\n");
	for(int i=0; i<currentindex; i++) {
		printf("%d\t%s\t%s\t%.02lf\t%d\n",a[i].id,a[i].name,a[i].Class,a[i].marks,a[i].attendence);
	}
}

