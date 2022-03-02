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

  if(ortalama>=90)
  {
    printf("%d notuyla AA aldınız.", ortalama);
  }
  else if(ortalama>=85)
  {
    printf("%d notuyla BA aldınız.", ortalama);
  }
  else if(ortalama>=80)
  {
    printf("%d notuyla BB aldınız.", ortalama);
  }
  else if(ortalama>=75)
  {
    printf("%d notuyla CB aldınız.", ortalama);
  }
  else if(ortalama>=70)
  {
    printf("%d notuyla koşullu geçtiniz.", ortalama);
  }
  else
  {
    printf("%d notuyla kaldınız.", ortalama);
  }
}