#include <stdio.h>

void segi4(int panjang, int lebar){
	for (int i = 0; i < lebar; ++i){
		for (int i = 0; i < panjang; ++i)
		{
			printf("%d ", i+1);
		}
		printf("\n");
	}
}

void segi3kanan(int baris){
	for (int i = 0; i < baris; i++){
		for (int j = 0; j <= i; j++){
			printf("%d ", j+1);
		}
		printf("\n");
	}
}

void segi3kiri(int baris){
	for (int i = 0; i < baris; i++){
		for (int j = 0; j < 2 * (baris-i-1); j++){
			printf(" "); //2 spasi
		}
		for (int k = 0; k <= i; k++){
			printf("%d ", k+1);
		}
		printf("\n");
	}
}

int main(){
	segi3kanan(5);
	segi3kiri(5);

	return 0;
}