#include<stdio.h>

int main(){
  int a=1;
  int b=1;
  int cevap=0;

  printf("Sayı girin: ");
  scanf("%d", &a);

  printf("Sayı girin: ");
  scanf("%d", &b);
  
  do{

    cevap=a+cevap;
    b--;
  }
  while(b>0);
  printf("Cevap: %d\n", cevap);
}