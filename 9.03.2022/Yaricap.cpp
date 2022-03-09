#include<stdio.h>

int main(){
  const float PI=3.14;
  int yaricap;

  printf("Dairenin yarıçapını girin: ");
  scanf("%d", &yaricap);

  printf("Dairenin alanı: %f\n", (PI*(yaricap*yaricap)));
}
