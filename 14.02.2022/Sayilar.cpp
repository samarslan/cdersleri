#include<stdio.h>

int main()
{
  int sayi;
  int b, o, y;

  printf("Sayı Girin: ");
  scanf("%d", &sayi);

  b = (sayi % 10);
  o = (((sayi-b) % 100)/10);
  y = ((sayi-(o*10)-b)/100);

  if(sayi<100||sayi>=1000)
  {
    printf("Geçersiz Giriş. ");
  }
  else if(y==b&&o!=y){
    printf("Mükemmel sayı. ");
  }
  else if(y==o&&o!=b){
    printf("Harika sayı. ");
  }
  else if(b==o&&o!=y){
    printf("Süper sayı. ");
  }
  else{
    printf("Normal sayı. ");
  }
}