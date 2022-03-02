#include<stdio.h>

int main()
{
  char karakter;

  printf("karakter girin: \n");
  scanf("%s", &karakter);

  if(karakter=='a'||karakter=='e'||karakter=='i'||karakter=='o'||karakter=='u'||karakter=='A'||karakter=='E'||karakter=='I'||karakter=='O'||karakter=='U')
  {
    printf("Sesli harf girdiniz.\n");
  }
  else
  {
    printf("Sessiz harf girdiniz.\n");
  }
}