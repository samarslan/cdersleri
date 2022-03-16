#include<stdio.h>

int main()
{
  int i;

  printf("Bir rakam girin: ");
  scanf("%d", &i);

  switch(i){
    case 1:printf("Bir\n");break;
    case 2:printf("İki\n");break;
    case 3:printf("Üç\n");break;
    case 4:printf("Dört\n");break;
    case 5:printf("Beş\n");break;
    default:printf("Hiçbiri\n");break;
  }
}