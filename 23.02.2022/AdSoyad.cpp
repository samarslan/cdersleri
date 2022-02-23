#include<stdio.h>
#include <string.h>

int main(){
  char ad[20];
  char soyad[20];
  printf("Ad girin: ");
  scanf("%s",ad);
  printf("Soyad girin: ");
  scanf("%s", soyad);

  sprintf(ad,"%s %s",ad, soyad);
  printf("%s", ad);
}