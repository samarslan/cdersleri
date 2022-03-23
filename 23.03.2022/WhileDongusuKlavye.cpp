#include<stdio.h>

int main(){
  int x=0;
  int t=0;
  int s;

  printf("Sayı girin: ");
  scanf("%d", &s);
  
  while(x<=s){
    t=x+t;
    x++;
  }
  printf("%d",t);
}