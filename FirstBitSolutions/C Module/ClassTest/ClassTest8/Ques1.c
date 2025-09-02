//Write a program to prompt user to enter userid and password.
//After verifying userid and password display a 4 digit random number and ask
//user fo enter the same If user enters the same namhes then show him success message otherwise Failed.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int verify_id(char*,char* );
int generate_num();
void verify_rand_num(int);
void main() {
	char input_userid[20];
	char input_password[20];


	printf("Enter User-Id :");
	scanf("%s",input_userid);

	printf("Enter password(numeric) :");
	scanf("%s",input_password);


	if(verify_id(input_userid,input_password)) {
		int random_number=generate_num();
		printf("%d",random_number);
		verify_rand_num(random_number);
	}else{
		printf("Entered userid and invalid password!");
	}


}

int verify_id(char* a,char* b) {
	char USERID[]="AMIT";
	char PASSWORD[]="AMIT123";

	if(strcmp(a,USERID)==0&&strcmp(b,PASSWORD)==0)
		return 1;
	else
		return 0;
}

int generate_num() {
	srand(time(0));
	int rand_num=rand()%9000+1000;
	return rand_num;
}

void verify_rand_num(int generated) {
	int user_generated;
	printf("Re-enter the same number :");
	scanf("%d",&user_generated);

	if(user_generated==generated) {
		printf("Log in successfull");
	} else {
		printf("Log in failed!");
	}
}






