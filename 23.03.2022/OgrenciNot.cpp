#include<stdio.h>

int main(){
  int ogrenciSayisi=0, notlar=0, ortalama=0,sayac=1, temp;

  printf("Öğrenci sayısı girin: ");
  scanf("%d",&ogrenciSayisi);
  
  while(sayac<=ogrenciSayisi){
    printf("\n%d.öğrencinin notunu girin: ", sayac);
    scanf("%d",&temp);
    notlar=notlar+temp;
    sayac++;
  }
  ortalama=notlar/ogrenciSayisi;
  printf("Ortalama: %d\n",ortalama);
}