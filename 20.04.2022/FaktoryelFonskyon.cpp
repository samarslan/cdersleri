#include <stdio.h>

long Faktoryel(int x){
  long sonuc=1;
  while(x>0){ 
    sonuc=sonuc*x;
    x--;
  }
  return sonuc;
}

int main(){
  int sayi=1;
  

  printf("Sayı girin: ");
  scanf("%d", &sayi);

  
  printf("\n%ld\n", Faktoryel(sayi));
}