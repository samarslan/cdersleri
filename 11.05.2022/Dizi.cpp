#include <stdio.h>
#include <stdlib.h>

int main(){
  int dizi[10];
  int temp=0;
  for(int i=1;i<11;i++){
    printf("%d.sayıyı girin: ", i);
    scanf("%d",&dizi[i-1]);
  }
  for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
      if(dizi[i]<dizi[j]){
        temp=dizi[i];
        dizi[i]=dizi[j];
        dizi[j]=temp;
      }
    }
  }
  printf("\n Girilen Sayıların Büyükten Küçüğe Sıralaması \n");
  for(int i=0;i<10;i++){
    printf("\n dizi[%d]= %d", i, dizi[i]);
  }
}