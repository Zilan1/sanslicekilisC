#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	char isim [15], soyad[10];
    int sec;
	int sayi;
		
    printf("*****Sansli Cekilis Uygulamasina Hosgeldiniz*****\n\n\n");
	printf("Isminizi Giriniz: ");
    scanf("%s",&isim); 
    printf("Soyisminizi Giriniz: ");
	scanf("%s",&soyad);
	
	printf("Asagidakilerden Birini Seciniz. \n[1]-Sansli Cekilise Katil! \n[2]-Kullanici Bilgilerini Kontrol Et!");
	printf("\nLutfen Birini Secin: ");
	scanf("%d",&sec);
	
	if(sec==1)
	{
		printf("Sansli Cekilis Uygulamasina Katildiniz.\nLutfen 1 ile 5 arasinda bir sayi seciniz: ");
		scanf("%d",&sayi);
		
		srand(time(NULL));
	    int randomSayi=1+rand()%5;
	    
	    if(sayi==randomSayi)
           { 
			printf("Sectiginiz Sayi: %d\nCekilisteki Sayi: %d",sayi,randomSayi);
			printf("\nKAZANDINIZ! TEBRIKLER..");
		   }
		   
		else
		{
			printf("Sectiginiz Sayi: %d\nCekilisteki Sayi: %d",sayi,randomSayi);
			printf("\nGIRDIGINIZ SAYI YANLIS!\nKAZANAMADINIZ! TEKRAR DENEYIN!");
		}   	       
	}
	
	if (sec==2)
	{
		printf("Kullanici Adiniz: %s\n Kullanici Soyadiniz: %s\n",isim,soyad);
	}
	
	
	return 0;
}
