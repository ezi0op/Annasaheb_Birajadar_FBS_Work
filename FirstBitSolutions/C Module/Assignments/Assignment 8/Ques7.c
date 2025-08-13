//7. Take two array and add sum in third array
//
//Example-
//arr[5]= {1,2, 3, 4,5}
//
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
void main() {
	int a1[5],a2[5],a3[5];
	for(int i=0; i<5; i++) {
		scanf("%d",&a1[i]);
	}
	for(int i=0; i<5; i++) {
		scanf("%d",&a2[i]);
	}

	for(int i=0; i<5; i++) {
		a3[i]=a1[i]+a2[i];
		printf("%d \n",a3[i]);
	}

}