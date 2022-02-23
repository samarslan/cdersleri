#include<stdio.h>

int main(){
  int a, b;

  printf("1.sayıyı girin: ");
  scanf("%d",&a);
  printf("2.sayıyı girin: ");
  scanf("%d",&b);

  if(a%2==0)
  {
    printf("%d",a);
    printf(" sayısı çifttir.");
  }
  else
  {
    printf("%d",a);
    printf(" sayısı tektir.");
  }
  
  if(b%2==0)
  {
    printf("\n%d",b);
    printf(" sayısı çifttir.");
  }
  else
  {
    printf("\n%d",b);
    printf(" sayısı tektir.");
  }
}