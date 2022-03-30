#include <stdio.h>

int main() {
	int sonuc = 0;

	for (int i = 0; i <= 100; i++) {
		sonuc = sonuc + i;
	}
	printf("%d", sonuc);
}