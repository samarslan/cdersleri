#include <stdio.h>

int main(){
  int x;
  int sayac=2;
  bool isPrime=true;
  
  printf("Sayı girin: ");
  scanf("%d", &x);

  while(sayac<x){
    if(x==2)
    {
      isPrime=true;
      break;
    }
    if(x%sayac==0)
    {
      isPrime=false;
      break;
    }
    sayac++;
  }
  
  if(isPrime){
    printf("\nSayı asal\n");
  }
  else{
    printf("\nSayı asal değil\n");
  }
}