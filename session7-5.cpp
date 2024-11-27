#include<stdio.h>
int main(){
	int mang[5]={1, 2, 3, 4, 5};
	int max=mang[0];
	int min=mang[0];
	for (int i=1;i<5;i++){
		if (mang[i]>max){
			max=mang[i];
		} else if (mang[i]<min){
			min=mang[i];
		}
	}
	printf("phan tu lon nhat cua mang la: %d \n", max);
	printf("phan tu nho nhat cua mang la: %d", min);
	return 0;
}
