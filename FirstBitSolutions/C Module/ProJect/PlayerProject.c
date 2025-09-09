#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct DOB {
	int date;
	int month;
	int year;
} DOB;

typedef struct Player {
	int JerseyNo;
	char Name[20];
	int Runs;
	int Wickets;
	int MatchesPlayed;
	DOB dob;
} Player;

void UpdatePlayer(Player* );
void UpdatePlayerRuns(Player* );
void UpdatePlayerWickets(Player* );
void UpdatePlayerMatches(Player* );
void SearchPlayer(Player*,int );
void SearchByPlayerName(Player*,int );
void SearchByJerseyNo(Player*,int );
void AddPlayer(Player* );
void DeletePlayer(Player* );
void SortedPlayer(Player* );
void MiniRuns(Player*);
void MaxRuns(Player*);
void MiniWicket(Player*);
void MaxWicket(Player*);
void VerifyBirthday(Player* );
void StorePlayer(Player* );
void DisplayAllPlayer(Player* );
int currentindex;

void main() {

	int s=10,choice;
	Player* p=(Player*)malloc(sizeof(Player)*s);
	StorePlayer(p);

	printf("====================================================================================================================\n");
	printf("                               Welcome to Player Management System!\n");
	printf("====================================================================================================================\n");

	while(1) {

		printf("\n--------------------------------------- Player Management Menu ------------------------------------------------\n");
		printf("1. Add Player\n");
		printf("2. Delete Player\n");
		printf("3. Update Player\n");
		printf("4. Display All Players\n");
		printf("5. Display Sorted Players\n");
		printf("6. Search Player\n");
		printf("7. Verify Player Birthday\n");
		printf("8. Exit\n");
		printf("====================================================================================================================\n");

		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				AddPlayer(p);
				break;
			case 2:
				DeletePlayer(p);
				break;
			case 3:
				UpdatePlayer(p);
				break;
			case 4:
				DisplayAllPlayer(p);
				break;
			case 5:
				SortedPlayer(p);
				break;
			case 6:
				SearchPlayer(p,currentindex);
				break;
			case 7:
				VerifyBirthday(p);
				break;
			case 8:
				printf("Exiting program. Goodbye!\n");
				exit(0);
			default:
				printf("Invalid choice! Please try again.\n");
		}

	}
	free(p);

}
void SortedPlayer(Player* a ) {
	int choice;
	while(1) {
		printf("\n================ Sort Players ================\n");
		printf("1.Sort by Runs\n");
		printf("2.Sort by Wickets\n");
		printf("3.Back to Menu\n");
		printf("==============================================\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				while(1) {
					printf("\n================ Sort By Runs ================\n");
					printf("1.MinimumRuns\n");
					printf("2.MaximumRuns\n");
					printf("3.Back to Menu\n");
					printf("==============================================\n");

					printf("Enter your option: \n");
					scanf("%d",&choice);

					switch(choice) {
						case 1:
							MiniRuns(a);
							break;
						case 2:
							MaxRuns(a);
							break;
						case 3:
							printf("Returning Sub-menu....");
							goto endRuns;
						default:
							printf("Invalid choice!");
							break;
					}
				}
				endRuns:
				break;


			case 2:
				while(1) {
					printf("\n================ Sort By Wickets ================\n");
					printf("1.MinimumWickets\n");
					printf("2.MaximumWickets\n");
					printf("3.Back to Menu\n");
					printf("==============================================\n");

					printf("Enter your option: \n");
					scanf("%d",&choice);

					switch(choice) {
						case 1:
							MiniWicket(a);
							break;
						case 2:
							MaxWicket(a);
							break;
						case 3:
							printf("Returning to sub-menu....");
							goto endWickets;
						default:
							printf("Invalid choice!");
							break;
					}
				}
				endWickets:
				break;


			case 3:
				printf("Returning to main-menu....");
				return;
			default:
				printf("Invalid choice!!!");
				break;
		}
	}
}


void MiniRuns(Player* a ) {
	for(int i=0; i<currentindex-1; i++) {
		for(int j=0; j<currentindex-1-i; j++) {
			if(a[j].Runs>a[j+1].Runs) {
				Player min=a[j];
				a[j]=a[j+1];
				a[j+1]=min;
			}
		}
	}
	for(int i=0; i<currentindex; i++) {
		printf("Minimum Runs are %d\n",a[i].Runs);
	}
}
void MaxRuns(Player* a ) {
	for(int i=0; i<currentindex-1; i++) {
		for(int j=0; j<currentindex-1-i; j++) {
			if(a[j].Runs<a[j+1].Runs) {
				Player max=a[j];
				a[j]=a[j+1];
				a[j+1]=max;
			}
		}
	}
	for(int i=0; i<currentindex; i++) {
		printf("Maximum Runs are %d\n",a[i].Runs);
	}
}
void MiniWicket(Player* a ) {
	for(int i=0; i<currentindex-1; i++) {
		for(int j=0; j<currentindex-1-i; j++) {
			if(a[j].Wickets>a[j+1].Wickets) {
				Player min=a[j];
				a[j]=a[j+1];
				a[j+1]=min;
			}
		}
	}
	for(int i=0; i<currentindex; i++) {
		printf("Minimum Wickets are %d\n",a[i].Wickets);
	}
}
void MaxWicket(Player* a ) {
	for(int i=0; i<currentindex-1; i++) {
		for(int j=0; j<currentindex-1-i; j++) {
			if(a[j].Wickets<a[j+1].Wickets) {
				Player max=a[j];
				a[j]=a[j+1];
				a[j+1]=max;
			}
		}
	}
	for(int i=0; i<currentindex; i++) {
		printf("Maximum Wickets are %d\n",a[i].Wickets);
	}
}
void DeletePlayer(Player* a ) {
	int no;
	printf("\n==============================================\n");
	printf("\nEnter the Player JerseyNo to Delete  :");
	scanf("%d",&no);
	printf("\n==============================================\n");
	int found=1;
	a=realloc(a,sizeof(Player)*(currentindex));
	for(int i=0; i<currentindex; i++) {

		if(a[i].JerseyNo==no) {
			found=0;
			for(int j=i; j<currentindex-1; j++) {
				a[j]=a[j+1];
			}
			currentindex--;
			printf("\n============== Player Deleted Successfully ! ==============\n");
			break;
		}

	}
	if(found==1) {
		printf("Invalid Player JerseyNo!");
	}

}
void AddPlayer(Player* a ) {
	int no;
	printf("\n==============================================\n");
	printf("\nHow many New Players You want to Add :");
	scanf("%d",&no);
	printf("\n==============================================\n");
	a=realloc(a,sizeof(Player)*(currentindex+no));
	for(int i=0; i<no; i++) {
		printf("\nEnter the Players Details %d :",currentindex+1);
		printf("\nJerseyNo :");
		scanf("%d",&a[currentindex].JerseyNo);
		printf("Name :");
		scanf("%s",a[currentindex].Name);
		printf("Runs :");
		scanf("%d",&a[currentindex].Runs);
		printf("Wickets :");
		scanf("%d",&a[currentindex].Wickets);
		printf("MatchesPlayed :");
		scanf("%d",&a[currentindex].MatchesPlayed);
		printf("DOB (Date Month Year) :");
		scanf("%02d %02d %04d",
		      &a[currentindex].dob.date,
		      &a[currentindex].dob.month,
		      &a[currentindex].dob.year);
		(currentindex)++;

		printf("\n============== Player Added Successfully! ==============\n");
	}

}
void UpdatePlayer(Player* a) {
	int choice;
	while(1) {
		printf("\n================ Update Players ===================\n");
		printf("1.Update Player Runs\n");
		printf("2.Update Player Wickets\n");
		printf("3.Update Player Matches\n");
		printf("4.Back to Menu\n");
		printf("==================================================\n");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				UpdatePlayerRuns(a);
				break;
			case 2:
				UpdatePlayerWickets(a);
				break;
			case 3:
				UpdatePlayerMatches(a);
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
void UpdatePlayerRuns(Player* a) {
	int no;
	printf("\n==============================================\n");
	printf("\nEnter the Player JerseyNo to update  :");
	scanf("%d",&no);
	printf("\n==============================================\n");
	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(a[i].JerseyNo==no) {
			found=0;
			printf("\n==============Update Player Runs of %s :==============\n",a[i].Name);
			printf("\nRuns :");
			scanf("%d",&a[i].Runs);

			printf("\n============== Player with JerseyNo %d Updated Successfully! ==============\n",no);
		}
	}
	if(found==1) {
		printf("\nInvalid Player JerseyNo!\n");
	}

}
void UpdatePlayerWickets(Player* a) {
	int no;
	printf("\n==============================================\n");
	printf("\nEnter the Player JerseyNo to update  :");
	scanf("%d",&no);
	printf("\n==============================================\n");
	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(a[i].JerseyNo==no) {
			found=0;
			printf("\n============== Update Player Wickets of %s! ==============\n",a[i].Name);
			printf("\nWickets :");
			scanf("%d",&a[i].Wickets);

			printf("\n============== Player with JerseyNo %d Updated Successfully! ==============\n",no);
		}
	}
	if(found==1) {
		printf("\nInvalid Player JerseyNo!\n");
	}

}
void UpdatePlayerMatches(Player* a) {
	int no;
	printf("\n==============================================\n");
	printf("\nEnter the Player JerseyNo to update  :");
	scanf("%d",&no);
	printf("\n==============================================\n");
	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(a[i].JerseyNo==no) {
			found=0;
			printf("\n============== Update Player Matches of %s! ==============\n",a[i].Name);
			printf("\nMatchesPlayed :");
			scanf("%d",&a[i].MatchesPlayed);

			printf("\n============== Player with JerseyNo %d Updated Successfully! ==============\n",no);
		}
	}
	if(found==1) {
		printf("\nInvalid Player JerseyNo!\n");
	}

}
void SearchPlayer(Player* p,int currentindex) {
	int choice;
	while(1) {
		printf("\n================ Search Players ===================\n");
		printf("1.Search by JerseyNo\n");
		printf("2.Search by PlayerName\n");
		printf("3.Back to Menu\n");
		printf("==================================================\n");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				SearchByJerseyNo(p,currentindex);
				break;
			case 2:
				SearchByPlayerName(p,currentindex);
				break;
			case 3:
				printf("Return to sub-menu.......");
				return;
			default:
				printf("Entered Option is Invalid!");
				break;
		}

	}
}

void SearchByPlayerName(Player* p,int currentindex) {
	char name[20];
	printf("\n==============================================\n");
	printf("\nEnter a PlayerName :");
	scanf(" %19s",name);
	printf("==============================================\n");

	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(strcasecmp(p[i].Name, name)==0) {
			found=0;
			printf("\n============= PlayerName found! ==============\n");
			printf("JerseyNo :%d\n",p[i].JerseyNo);
			printf("Runs :%d\n",p[i].Runs);
			printf("Wickets :%d\n",p[i].Wickets);
			printf("MatchesPlayed :%d\n",p[i].MatchesPlayed);
			printf("DOB (Date Month Year) : %02d : %02d: %04d\n",
			       p[i].dob.date,
			       p[i].dob.month,
			       p[i].dob.year);
			break;
		}
	}
	if(found==1) {
		printf("\nPlayerName not found :");
	}
}
void SearchByJerseyNo(Player* p,int currentindex) {
	int no;
	printf("\n==============================================\n");
	printf("\nEnter the JerseyNo :");
	scanf("%d",&no);
	printf("\n==============================================");

	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(p[i].JerseyNo==no) {
			found=0;
			printf("\n================ JerseyNo found! =============\n");
			printf("Name :%s\n",p[i].Name);
			printf("Runs :%d\n",p[i].Runs);
			printf("Wickets :%d\n",p[i].Wickets);
			printf("MatchesPlayed :%d\n",p[i].MatchesPlayed);
			printf("DOB (Date Month Year) : %02d : %02d: %04d\n",
			       p[i].dob.date,
			       p[i].dob.month,
			       p[i].dob.year);
			break;
		}
	}
	if(found==1) {
		printf("\nJerseyNo not found !");
	}
}
void VerifyBirthday(Player* p) {
	int date;
	int month;
	printf("\n==============================================\n");
	printf("Enter the current Date :\n");
	scanf("%d",&date);
	printf("\n==============================================\n");
	printf("Enter the current  Month :\n");
	scanf("%d",&month);
	printf("\n==============================================\n");

	int found=1;
	for(int i=0; i<currentindex; i++) {
		if(p[i].dob.date==date&&p[i].dob.month==month) {
			found =0;
			printf("\n**************** Happy Birthday to %s! ****************\n",p[i].Name);
		}
	}
	if(found==1) {
		printf("\n**************** No Birthdays Today! ****************\n");
	}
}



void StorePlayer(Player* p ) {
	p[0].JerseyNo=7;
	strcpy(p[0].Name,"Dhoni");
	p[0].Runs =10500;
	p[0].Wickets=1;
	p[0].MatchesPlayed=350;
	p[0].dob.date=7;
	p[0].dob.month=8;
	p[0].dob.year=1988;

	p[1].JerseyNo=18;
	strcpy(p[1].Name,"Kohli");
	p[1].Runs=12000;
	p[1].Wickets=4;
	p[1].MatchesPlayed=280;
	p[1].dob.date=12;
	p[1].dob.month=2;
	p[1].dob.year=1998;

	p[2].JerseyNo=45;
	strcpy(p[2].Name,"Rohit");
	p[2].Runs=9500;
	p[2].Wickets=8;
	p[2].MatchesPlayed=250;
	p[2].dob.date=27;
	p[2].dob.month=7;
	p[2].dob.year=1998;

	p[3].JerseyNo=12;
	strcpy(p[3].Name,"Yuvraj");
	p[3].Runs=8700;
	p[3].Wickets=111;
	p[3].MatchesPlayed=300;
	p[3].dob.date=17;
	p[3].dob.month=2;
	p[3].dob.year=1978;

	p[4].JerseyNo=99;
	strcpy(p[4].Name,"Bumrah");
	p[4].Runs=300;
	p[4].Wickets=150;
	p[4].MatchesPlayed=90;
	p[4].dob.date=22;
	p[4].dob.month=2;
	p[4].dob.year=1998;
	
	p[5].JerseyNo=33;
    strcpy(p[5].Name,"Hardik");
    p[5].Runs=3500;
    p[5].Wickets=80;
    p[5].MatchesPlayed=120;
    p[5].dob.date=11;
    p[5].dob.month=10;
    p[5].dob.year=1993;

    p[6].JerseyNo=77;
    strcpy(p[6].Name,"Jadeja");
    p[6].Runs=2500;
    p[6].Wickets=180;
    p[6].MatchesPlayed=190;
    p[6].dob.date=6;
    p[6].dob.month=12;
    p[6].dob.year=1988;


	currentindex=7;
}
void  DisplayAllPlayer(Player* p ) {
	printf("\n=============================================== Player Details =====================================================\n");
	for(int i=0; i<currentindex; i++) {
		printf("\n----------------------------------------------- Players %d ----------------------------------------------------------\n",i+1);
		printf("JerseyNo :%d\n",p[i].JerseyNo);
		printf("Name :%s\n",p[i].Name);
		printf("Runs :%d\n",p[i].Runs);
		printf("Wickets :%d\n",p[i].Wickets);
		printf("MatchesPlayed :%d\n",p[i].MatchesPlayed);
		printf("DOB (Date Month Year) : %02d : %02d: %04d\n",
		       p[i].dob.date,
		       p[i].dob.month,
		       p[i].dob.year);
		printf("\n--------------------------------------------------------------------------------------------------------------------\n");
	}
	printf("====================================================================================================================\n");
}






