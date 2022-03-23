#include<stdio.h>

int main(){
  int x=0;
  int t=0;

  while(x<=100){
    t=x+t;
    x++;
  }
  printf("%d",t);
  printf("\n%d\n",(100*101)/2);
}