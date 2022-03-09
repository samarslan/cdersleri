#include<stdio.h>

int main(){
  int a,b,c,d,e;

  printf("\n1.Sayıyı girin:\n");
  scanf("%d", &a);

  printf("\n2.Sayıyı girin:\n");
  scanf("%d", &b);
  
  printf("\n3.Sayıyı girin:\n");
  scanf("%d", &c);
  
  printf("\n4.Sayıyı girin:\n");
  scanf("%d", &d);
  
  printf("\n5.Sayıyı girin:\n");
  scanf("%d", &e);

  if(a>b&&a>c&&a>d&&a>e){
    printf("1.Sayı en büyüktür.\n");
  }
  else if(b>a&&b>c&&b>d&&b>e){
    printf("2.Sayı en büyüktür.\n");
  }
  else if(c>a&&c>b&&b>d&&b>e){
    printf("3.Sayı en büyüktür.\n");
  }
  else if(d>a&&d>b&&d>c&&d>e){
    printf("4.Sayı en büyüktür.\n");
  }
  else if(e>a&&e>b&&e>c&&e>d){
    printf("5.Sayı en büyüktür.\n");
  }
  else{
    printf("En büyükleri yoktur\n");
  }
}
