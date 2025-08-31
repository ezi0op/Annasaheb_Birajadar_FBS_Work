//3. Write a program to create an array for 10 players. For each player store name, no. of
//matches played, runs, wickets takes.
//a. Create function to Accept the information of each player.
//b. Create function to display the information of all the players
//c. Display the information of player who made maximum runs and the one who took
//maximum number of wickets.
#include<stdio.h>
typedef struct player {
	char Name[20];
	int MatchesPlayed;
	int runs;
	int wickets;
} player;
void StorePlayer(player*,int );
void DisplayPlayer(player*,int );
void MaxPlayerRuns(player*,int );
void MiniPlayerWickets(player*,int );
void main() {
	int a=2;
	player p[a];
	StorePlayer(p,a);
	DisplayPlayer(p,a);
	MaxPlayerRuns(p,a);
	MiniPlayerWickets(p,a);

}
void MaxPlayerRuns(player* a,int b) {
	int MaxRuns=a[0].runs;
	int index=0;
	for(int i=0; i<b; i++) {
		if(a[i].runs>MaxRuns) {
			MaxRuns=a[i].runs;
			index=i;
		}
	}
	printf("\nMaximum Runs of the Player %d is %d",index,a[index].runs);
}
void MiniPlayerWickets(player* a,int b) {
	int MiniWickets=a[0].wickets;
	int index=0;
	for(int i=0; i<b; i++) {
		if(a[i].wickets<MiniWickets) {
			MiniWickets=a[i].wickets;
			index=i;
		}
	}
	printf("\nMinimum Wickets of the taken by Player %d is %d",index,a[index].wickets);
}

void StorePlayer(player* s,int b) {
	for(int i=0; i<b; i++) {
		printf("Enter the details of Players %d",i+1);
		printf("\nName :");
		scanf("%s",s[i].Name);
		printf("MatchesPlayed :");
		scanf("%d",&s[i].MatchesPlayed);
		printf("Runs :");
		scanf("%d",&s[i].runs);
		printf("Wickets :");
		scanf("%d",&s[i].wickets);
	}
}
void DisplayPlayer(player* s,int b) {
	for(int i=0; i<b; i++) {
		printf("\nEnter the details of Players %d",i+1);
		printf("\nName :%s",s[i].Name);
		printf("\nMatchesPlayed :%d",s[i].MatchesPlayed);
		printf("\nRuns :%d",s[i].runs);
		printf("\nWickets :%d",s[i].wickets);
	}
}
