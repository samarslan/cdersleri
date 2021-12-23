#include<stdio.h>
int main(){
	float vize, final, quiz, ortalama;
	printf("vize gir: ");
	scanf("%f", &vize);
	printf("final gir: ");
	scanf("%f", &final);
	printf("quiz gir: ");
	scanf("%f", &quiz);
	ortalama=(vize*30/100)+(final*50/100)+(quiz*20/100);
	
	if(ortalama<101&&ortalama>84){
		printf("AA %f", ortalama);
	}
	if(ortalama<85&&ortalama>69){
		printf("BB %f", ortalama);
	}
	if(ortalama<70&&ortalama>54){
		printf("CC %f", ortalama);
	}
	if(ortalama<55&&ortalama>29){
		printf("DD %f", ortalama);
	}
	if(ortalama<29&&ortalama>=0){
		printf("FF %f", ortalama);
	}
	
}
