#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct list {
	int id;
	char desc[20];
	char status[20];
} list;
void scanTask(list*,int );
void displayTask(list*,int );
void addTask(list*,int );
void deleteTask(list*,int );
void updateTask(list*,int );
void main() {
	int s=3,choice;
	list l[s];
	scanTask(l,s);
	displayTask(l,s);
	while(1) {
		printf("\n1. add task\n");
		printf("\n2. delete task\n");
		printf("\n3. update task\n");
		printf("\n4.Exit\n");

		printf("\nEnter choice :");
		scanf("%d",&choice);
		switch (choice) {
			case 1:
				addTask(l,s);
				displayTask(l,s);
				break;
			case 2:
				deleteTask(l,s);
				displayTask(l,s);
				break;
			case 3:
				updateTask(l,s);
				displayTask(l,s);
				break;
			case 8:
				printf("Exit..");
				exit(0);
		}
	}

}
void scanTask(list* a,int n) {
	for(int i=0; i<n; i++) {
		printf("\nEnter details of tasks %d:",i);
		printf("\nid :");
		scanf("%d",&a[i].id);
		printf("desc :");
		scanf("%s",a[i].desc);
		printf("status :");
		scanf("%s",a[i].status);
	}
}
void displayTask(list* a,int s) {
	for(int i=0; i<s; i++) {
		printf("\n%d",a[i].id);
		printf("\n%s",a[i].desc);
		printf("\n%s",a[i].status);
	}
}
void addTask(list* a,int s) {
	int n;
	printf("\nEnter how many tasks to add :");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		printf("\nEnter details of tasks %d:",s+n);
		printf("id :");
		scanf("%d",&a[i].id);
		printf("desc :");
		scanf("%s",a[i].desc);
		printf("status :");
		scanf("%s",a[i].status);

		printf("Task added successfully :");
	}

}
void deleteTask(list* a,int s) {
	int id;
	printf("\nEnter the task id to delete :");
	scanf("%d",&id);
	for(int i=0; i<s; i++) {
		if(a[i].id==id) {
			a[i]=a[i+1];
		}
		s--;
	}
	printf("Task deleted successfully : ");
}

void updateTask(list* a,int s) {
	int id;
	printf("\nEnter  tasks to id to update :");
	scanf("%d",&id);
	for(int i=0; i<s; i++) {
		if(a[i].id==id) {
			printf("\nEnter details of update tasks %d:",id);
			printf("id :");
			scanf("%d",&a[i].id);
			printf("desc :");
			scanf("%s",a[i].desc);
			printf("status :");
			scanf("%s",a[i].status);
		}

	}
	printf("Task updated successfully :");

}

























