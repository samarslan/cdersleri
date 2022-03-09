#include <stdio.h>
#include <math.h>


int main(){
  int hiz, yol, secim;
  float zaman;

  printf("Hız bulmak için 1'e\nZaman bulmak için 2'ye basın.\n");
  scanf("%d", &secim);

  if(secim==1){
    printf("Gidilicek yol uzunluğunu girin: ");
    scanf("%d", &yol);

    printf("Kaç saatte gitmek istiyorsunuz: ");
    scanf("%f", &zaman);

    hiz=yol/zaman;

    printf("%dkm yolu %f saatte gitmek için %dkm/s hız ile gitmelisiniz.\n",yol,zaman,hiz);
  }
  else if(secim==2)
  {
    int saat, dakika;
    float zaman;
    
    printf("Gidilicek yol uzunluğunu girin: ");
    scanf("%d", &yol);

    printf("Kaç km hız ile gideceksiniz: ");
    scanf("%d", &hiz);

    zaman = (float)((float)yol / (float)hiz);
    saat = floor(zaman);
    dakika = (int)(floor(float((zaman - saat)) * 60.0000000));
    
    printf("%dkm yolu %dkm/s süratle %d saat %d dakikada gidersiniz..\n",yol,hiz,saat, dakika);
  }
}
