#include<stdio.h>
int main(){
	int mang[5] = {1, 2, 3, 4, 5};
    int check = 0;
    printf("Cac so chan trong mang: ");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            check = 1;
        }
    }
    if (check==0) {
        printf("Mang khong chua so chan.");
    }
    return 0;
}
		
	
