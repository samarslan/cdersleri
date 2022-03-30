#include <stdio.h>

int main() {
	int sayi;
	bool asalMi=true;
  

	scanf("%d", &sayi);
	if (sayi <= 1) {
		asalMi = false;
	} else if (sayi == 2) {
		asalMi = true;
	} else {
		for (int i = 2; i < sayi; i++) {
			if (sayi % i == 0) {
				asalMi = false;
				break;
			}
		}
	}

  if(asalMi){
    printf("\nSayı asal\n");
  }
  else{
    printf("\nSayı asal değil\n");
  }
}