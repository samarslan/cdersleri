#include <stdio.h>

int Kup(int x){
 return x*x*x; 
}

int main(){
  int a;

  printf("Sayı Girin: ");
  scanf("%d",&a);

  printf("\nSayının küpü: %d\n", Kup(a));
  
  return 0;
}