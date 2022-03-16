#include <stdio.h>

int main(){
  int i;
  
  printf("Ay girin: ");
  scanf("%d", &i);

  switch(i){
    case 12:
    case 1:
    case 2:printf("Kış\n"); break;
    case 3:
    case 4:
    case 5:printf("İlkbahar\n"); break;
    case 6:
    case 7:
    case 8:printf("Yaz\n"); break;
    case 9:
    case 10:
    case 11:printf("Sonbahar\n"); break;
    default:printf("Hatalı giriş\n"); break;
  }
}