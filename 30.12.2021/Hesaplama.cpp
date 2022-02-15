#include<stdio.h>

int main(){
  int a, b, c, sec;

  printf("a sayisi:");
  scanf("%d", &a);
  
  printf("b sayisi:");
  scanf("%d", &b);

  printf("1-Toplama: ");
  printf("\n2-Çıkarma: ");
  printf("\n3-Çarpma: ");
  printf("\n4-Bölme: ");
  scanf("%d", &sec);

  if(sec==1){
    c=a+b;
    printf("toplam: %d",c);
  }
  if(sec==2){
    c=a-b;
    printf("cevap: %d",c);
  }
  if(sec==3){
    c=a*b;
    printf("cevap: %d",c);
  }
  if(sec==4){
    c=a/b;
    printf("Cevap: %d",c);
  }
  
}
