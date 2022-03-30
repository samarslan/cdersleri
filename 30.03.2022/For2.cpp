#include <stdio.h>

int main() {
	int sonuc = 0;
  int sayi = 1;

	printf("Sayı Girin: ");
	scanf("%d", &sayi);
	for (int i = 0; i <= sayi; i++) {
		sonuc = sonuc + i;
	}
	printf("%d", sonuc);
}