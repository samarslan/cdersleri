#include<stdio.h>

int main(){
  char ad[20];
  char soyad[20];
  printf("Ad girin: ");
  scanf("%s",ad);
  printf("Soyad girin: ");
  scanf("%s", soyad);

  printf("%s %s", ad, soyad);
}