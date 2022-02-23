#include<stdio.h>
#include<time.h>

int main(){
  int gun, ay, yil;
  int gunYas, ayYas, yilYas;

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

  time_t ts;
  struct tm *ct;
  ts = time(NULL);
  ct = localtime(&ts);

  gunYas = gun + ct->tm_mday;
  ayYas = (12 - ay) + (ct->tm_mon);
  yilYas = (ct->tm_year + 1900) - yil - 1;

  if (gunYas>31)
  {
    ayYas = ayYas + 1;
    gunYas=gunYas-31;
  }
  if (ayYas==12)
  {
    yilYas = yilYas + 1;
    ayYas=ayYas-12;
  }
 
  printf("\n%d gün %d ay %d yıl yaşındasınız. ", gunYas, ayYas, yilYas);
}