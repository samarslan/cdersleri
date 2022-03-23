#include <stdio.h>

int main(){
  int sayi=1;
  long sonuc=1;

  printf("Sayı girin: ");
  scanf("%d", &sayi);

  while(sayi>0){
    sonuc=sonuc*sayi;
    sayi--;
  }
  printf("\n%ld\n", sonuc);
}