#include<stdio.h>

int main()
{
  int secim, a, b, c;

  printf("1-ÜÇGEN ALANI \n2-KARE ALANI \n3-DİKDÖRTGEN ALANI ");
  printf("\nSeçim Yapın: ");
  scanf("%d", &secim);

  switch(secim){
    case 1:{
      printf("Taban girin: ");
      scanf("%d", &a);

      printf("Yükseklik girin: ");
      scanf("%d", &b);

      c=a*b/2;
      
      break;
    }
    case 2:{
      printf("Kenarı girin: ");
      scanf("%d", &a);
      
      c=a*a;
      
      break;
    }
    case 3:{
      printf("1.Kenarı girin: ");
      scanf("%d", &a);

      printf("2.Kenarı girin: ");
      scanf("%d", &b);

      c=a*b;
      
      break;
    }
    default:{
      printf("Geçersiz Seçim.");

      break;
    }
  }
  printf("%d", c);
}