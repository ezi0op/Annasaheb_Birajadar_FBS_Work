//5. WAP to Count the Number of Vowels in a String
#include<stdio.h>
int CountVowels(char* );
void main() {
	char a[]="amit";
	int res=CountVowels(a);
	printf("%d",res);
}
int CountVowels(char* s) {
	int count=0;
	for(int i=0; s[i]!='\0'; i++) {
		char c=s[i];
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			count++;
	}
	return count;
}