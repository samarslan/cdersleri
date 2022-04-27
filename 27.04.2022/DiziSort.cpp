#include<stdio.h>
main(){
	int sayilar[10];
	for (int i = 0; i<10; i++)
	{
		printf("%d. Elemani Giriniz:", i);
		scanf("%d", &sayilar[i]);
	}
	int eb, ek, ek_i=0, eb_i=0; //eb_i En büyük sayýnýn indexi. Ek_i En küçük sayýnýn indexi
	ek=eb=sayilar[0];
	for(int i=0; i<10;i++)
	{
		if(sayilar[i]>eb)
		{
			eb=sayilar[i];
			eb_i=i;
		}
		if(sayilar[i]<ek)
		{
			ek=sayilar[i];
			ek_i=i;
		}
		
	}
	printf("En Buyuk = %d ve Index = %d\n", eb, eb_i);
	printf("En Kucuk = %d ve Index = %d\n", ek, ek_i);
}

