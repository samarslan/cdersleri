#include <stdio.h>
#include <curses.h>

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
    int a,b,c, sure;
    int saat, dakika;
    
    printf("Gidilicek yol uzunluğunu girin: ");
    scanf("%d", &yol);

    printf("Kaç km hız ile gideceksiniz: ");
    scanf("%d", &hiz);

    sure=(float)yol/(float)hiz*3600;
    printf("\n____________");
    a=sure/3600;
    b=(sure-(a*3600))/60;
    c=sure-(a*3600)-(b*60);
    printf("\nbu sure %d saat, %d dakika, %d saniye eder",a,b,c);
    getch();
    return 0;
  }
}
