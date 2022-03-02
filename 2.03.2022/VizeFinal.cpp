#include<stdio.h>

int main()
{
  int vize, final, quiz, ortalama;

  printf("vize notu girin: ");
  scanf("%d", &vize);
  if(vize<0||vize>100)
  {
    printf("Geçersiz not girişi.\n");
    vize=50;
  }

  printf("quiz notu girin: ");
  scanf("%d", &quiz);
  if(quiz<0||quiz>100)
  {
    printf("Geçersiz not girişi.\n");
    quiz=50;
  }

  printf("final notu girin: ");
  scanf("%d", &final);
  if(final<0||final>100)
  {
    printf("Geçersiz not girişi.\n");
    final=50;
  }

  ortalama= quiz*0.1+vize*0.3+final*0.6;

  if(ortalama>=70)
  {
    printf("%d notuyla geçtiniz", ortalama);
  }
  else
  {
    printf("%d notuyla kaldınız", ortalama);
  }
}