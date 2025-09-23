#include <stdio.h>

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
			printf("  ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void segi3(int baris){
	for (int i = 0; i < baris; i++){
		for (int j = 0; j < (baris-i-1); j++){
			printf(" ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	segi3(10);
	return 0;
}