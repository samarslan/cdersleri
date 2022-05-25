#include <stdio.h>

int main(){
  int dizi[4][3];

  for(int i=0;i<4;i++){
    for(int k=0;k<3;k++){
      printf("Eleman Gir : dizi[%d][%d]: ",i,k);
      scanf("%d",&dizi[i][k]);
    }
  }
  for(int i=0;i<4;i++){
    for(int k=0;k<3;k++){
      printf("%3d", dizi[i][k]);
    }
    printf("\n");
  }
}