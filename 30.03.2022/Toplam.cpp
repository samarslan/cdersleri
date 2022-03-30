#include<stdio.h>

int main(){
  int sayi=1;
  int count=0, toplam=0;

  do{
    printf("Sayı girin");
    scanf("%d", &sayi);
    toplam=toplam+sayi;
    count++;
  }
  while(toplam<100);
  printf("%d adet sayı girildi toplamları %d\n", count, toplam);
}