#include<stdio.h>

int main(){
  int sayi, o, b;

  printf("Sayı grin: ");
  scanf("%d", &sayi);
  o=sayi/10;
  b=sayi-(o*10);

  switch(o){
    case 1:printf("On ");break;
    case 2:printf("Yirmi ");break;
    case 3:printf("Otuz ");break;
    case 4:printf("Kırk ");break;
    case 5:printf("Elli ");break;
    case 6:printf("Altmış ");break;
    case 7:printf("Yetmiş ");break;
    case 8:printf("Seksen ");break;
    case 9:printf("Doksan ");break;
    default:printf("Hatalı giriş\n"); break;
  }

  switch(b){
    case 0:printf("\n");break;
    case 1:printf("Bir\n");break;
    case 2:printf("İki\n");break;
    case 3:printf("Üç\n");break;
    case 4:printf("Dört\n");break;
    case 5:printf("Beş\n");break;
    case 6:printf("Altı\n");break;
    case 7:printf("Yedi\n");break;
    case 8:printf("Sekiz\n");break;
    case 9:printf("Dokuz\n");break;
    default:printf("Hatalı giriş\n"); break;
  }
}