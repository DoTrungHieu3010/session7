#include<stdio.h>
int main(){
	int n;
	int mang[n];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		printf("Nhap mang[%d]: ", i);
		scanf("%d", &mang[i]);
	}
	return 0;
}
