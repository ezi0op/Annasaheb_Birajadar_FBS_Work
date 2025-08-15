//8. Merge two arrays
#include<stdio.h>
void main() {
	int s1=5,s2=5,s3=s1+s2;
	int c[s3],i;
	int a[s1],b[s2];
	for( i=0; i<s1; i++) {
		scanf("%d",&a[i]);
	}
	for( i=0; i<s2; i++) {
		scanf("%d",&b[i]);
	}
	for( i=0; i<s1; i++) {
		c[i]=a[i];
	}
	for(int j=0; j<s2; j++) {
		c[i]=b[j];
		i++;
	}
	for( i=0; i<s3; i++) {
		printf("%d ",c[i]);
	}

}