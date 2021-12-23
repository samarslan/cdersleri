#include<stdio.h>
int main(){
  int k1,k2,k3;
  scanf("%d", &k1);
  scanf("%d", &k2);
  scanf("%d", &k3);

  if (k1+k2<k3&&k1-k2<k3){
    printf("üçgen");
  }
  else if(k2+k3<k1&&k2-k3<k1 )
}