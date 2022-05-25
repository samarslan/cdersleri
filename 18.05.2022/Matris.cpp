#include <stdio.h>

int main() {
	char dizi[5][5] = {' '};
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			if (i + k == 2 || i + k == 6) {
				dizi[i][k] = '*';
			} 
      else if (i + k == 4 && i % 2==1) {
				dizi[i][k] = '*';
			}
			printf("%c", dizi[i][k]);
		}
		printf("\n");
	}
}