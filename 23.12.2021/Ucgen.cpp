#include<stdio.h>
int main(){
  int a,b,c;
  printf("a kenarını girin: ");
  scanf("%d", &a);
  printf("b kenarını girin: ");
  scanf("%d", &b);
  printf("c kenarını girin: ");
  scanf("%d", &c);

  if(a<b+c && a>b-c || b<a+c && b>a-c || c<b+a && c>a-b){
    printf("Bu şekil üçgendir");

    if(a==b && a!=c || a==c && a!=b || b==c && b!=a){
      printf("\nİkizkenar üçgendir");
    }

    if(a!=b && a!=c && b!=c){
      printf("\nÇeşitkenar üçgendir");
    }

    if(a==b && a==c){
      printf("\nEşkenar üçgendir");
    }

  }
  else
  {
    printf("Bu şekil üçgen değildir");
  }
}
