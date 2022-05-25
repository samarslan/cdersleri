#include <stdio.h>
int main() {
	int a[4][4];
	int toplam = 0;
	int x = 1;
	int y = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = x++;
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n-------%3d", a[0][0] + a[0][3] + a[3][0] + a[3][3]);
	printf("\n");
	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i == 0 && j == 0) || (i == 0 && i + j == 3) ||
				(i == 3 && j == 0) || i + j == 6) {
				y = y + a[i][j];
			}
		}
	}
	printf("%d", y);
}