#include <stdio.h>

void segi4(int panjang, int lebar){
	for (int i = 0; i < lebar; ++i){
		for (int i = 0; i < panjang; ++i)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void segi3kanan(int baris){
	for (int i = 0; i < baris; i++){
		for (int j = 0; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void segi3kiri(int baris){
	for (int i = 0; i < baris; i++){
		for (int j = 0; j < (baris-i-1); j++){
			printf("  "); //2 spasi
		}
		for (int k = 0; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void segi3full(int baris){
	for (int i = 0; i < baris; i++){
		for (int j = 0; j < 2* (baris-i)-1; j++){
			printf(" ");
		}
		for (int k = 0; k < 2* i+1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	
	segi3full(10);

	return 0;
}