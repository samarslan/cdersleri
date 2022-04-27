#include <stdio.h>

int main(){
  int dizi[5];
  int toplam=0;

  for(int i=1;i<6;i++){
    printf("%d.sayıyı girin: ", i);
    scanf("%d",&dizi[i-1]);
  }
  for(int i=0;i<5;i++){
    toplam+=dizi[i];
  }
  printf("\nSayıların toplamı: %d\n",toplam);
  printf("Sayıların ortalaması: %f\n",(float)((float)toplam/5));
}