#include<stdio.h>

int main()
{
  bool seslimi=false;
  char karakter;
  char sesliHarfler[]={'a','e','i','o','u','A','E','I','O','U'};

  printf("karakter girin: \n");
  scanf("%s", &karakter);

  for(int i=0; i<10; i++)
  {
    if(karakter==sesliHarfler[i])
    {
       seslimi=true;
    }
  }

  if(seslimi)
  {
    printf("Sesli harf girdiniz\n");
  }
  else
  {
    printf("Sessiz harf girdiniz\n");
  }
}