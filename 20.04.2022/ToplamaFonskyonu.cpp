#include <stdio.h>

int Toplama(int x, int y){
 return x+y; 
}

int main(){
  int x,y;

  printf("1.Sayıyı Girin: ");
  scanf("%d",&x);
  printf("\n2.Sayıyı Girin: ");
  scanf("%d",&y);

  printf("\nToplam: %d\n", Toplama(x,y));
  
  return 0;
}