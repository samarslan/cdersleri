#include <stdio.h>

int main() {
  int x=1;
	int dizi[3][3];
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
	    dizi[i][k]=x;
      x++;
		}
	}
  for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("%d", dizi[i][k]);
		}
		printf("\n");
	}
  int rdizi[3][3];
  for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			rdizi[k][i]=dizi[i][k];
		}
		printf("\n");
	}
  for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("%d", rdizi[i][k]);
		}
		printf("\n");
	}
}