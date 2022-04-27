#include <stdio.h>
int fak(int n){
	if (n==1) return 1;
	else return n*fak(n-1);
}
main(){
	int n;
	printf("Faktoryel yapýlacak sayý gir");
	scanf("%d",&n);
	printf("N degerinin faktor=%d\n",fak(n));
}
