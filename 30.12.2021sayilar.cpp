#include<stdio.h>

main(){
  int a, b, c, sayi;

  printf("yüzler basamağı: ");
  scanf("%d", &a);
  printf("onlar basamağı: ");
  scanf("%d", &b);
  printf("birler basamağı: ");
  scanf("%d", &c);

  sayi=a*100+b*10+c;

  if(sayi%2==0&&sayi%3==0){
    sayi=sayi*sayi;
  }
  else{
    sayi=sayi*sayi*sayi;
  }

  printf("%d",sayi);
}
