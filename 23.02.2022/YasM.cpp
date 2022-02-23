#include<stdio.h>

int main(){
  int gun, ay, yil;
  int gunYas, ayYas, yilYas;
  int bugun, buAy,buYil;

  printf("Doğum yılınızı girin: ");
  scanf("\n%d", &yil);
  printf("Doğum ayınızı girin: ");
  scanf("\n%d", &ay);
  if(ay>12)
  {
    printf("\nAy değeri 12'den büyük olamaz.");
    ay=1;
  }
  
  printf("Doğum gününüzü girin: ");
  scanf("\n%d", &gun);
  if(gun>31)
  {
    printf("\nGün değeri 31'den büyük olamaz.");
    gun=1;
  }

  printf("Bu yılı girin: ");
  scanf("\n%d", &buYil);
  printf("Bu ayı girin: ");
  scanf("\n%d", &buAy);
  if(ay>12)
  {
    printf("\nAy değeri 12'den büyük olamaz.");
    buAy=1;
  }
  
  printf("Bu günü girin: ");
  scanf("\n%d", &bugun);
  if(gun>31)
  {
    printf("\nGün değeri 31'den büyük olamaz.");
    bugun=1;
  }

  gunYas = bugun-gun;
  ayYas = buAy-ay;
  yilYas = buYil-yil;
  
  if (gunYas<0)
  {
    gunYas=gunYas*-1;
  }
  if (ayYas<0)
  {
    ayYas=ayYas*-1;
  }
  
  if (gun>bugun)
  {
    gunYas=31-gunYas;
    ayYas--;
  }
  if(ayYas<0)
  {
    yilYas=yilYas-(ayYas*-1);
    ayYas=12-(ayYas*-1);
  }
  if (ay>buAy)
  {
    ayYas=12-ayYas;
    yilYas=yilYas-1;
  }
  
  printf("\n%d gün %d ay %d yıl yaşındasınız. ", gunYas, ayYas, yilYas);
}