#include<stdio.h>

int main(){
  int sayi, o, b;

  printf("Sayı grin: ");
  scanf("%d", &sayi);
  o=sayi/10;
  b=sayi-(o*10);

  if(o==1)
  printf("On ");
  else if(o==2)
  printf("Yirmi ");
  else if(o==3)
  printf("Otuz ");
  else if(o==4)
  printf("Kırk ");
  else if(o==5)
  printf("Elli ");
  else if(o==6)
  printf("Altmış ");
  else if(o==7)
  printf("Yetmiş ");
  else if(o==8)
  printf("Seksen ");
  else if(o==9)
  printf("Doksan ");
  else
  printf("Hatalı giriş\n");


  if(b==1)
  printf("Bir \n");
  else if(b==2)
  printf("İki \n");
  else if(b==3)
  printf("Üç \n");
  else if(b==4)
  printf("Dört \n");
  else if(b==5)
  printf("Beş \n");
  else if(b==6)
  printf("Altı \n");
  else if(b==7)
  printf("Yedi \n");
  else if(b==8)
  printf("Sekiz \n");
  else if(b==9)
  printf("Dokuz \n");
  else if(b==0)
  printf("\n");
  else
  printf("Hatalı giriş\n");
}