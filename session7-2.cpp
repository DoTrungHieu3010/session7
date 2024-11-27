#include<stdio.h>
int main(){
	int mang[5];
	for (int i=1;i<=5;i++){
		printf("Nhap mang[%d]: ", i);
	    scanf("%d", &mang[i]);
	}
	printf("Mang cua ban la: ");
	for (int i=1;i<=5;i++){
		printf("%d", mang[i]);
	}

	return 0;
}
