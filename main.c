#include <stdio.h>
#include <stdlib.h>

//Aleyna Erarslan
//soru: s�f�r� bulana kadar say.
int main(int argc, char *argv[]) {
	
    int num1, num2, islem = 0; // num1,num2 ad�nda 2 tam sayi de�i�keni tan�mlad�k.Ve islem ad�ndaki de�i�keni s�f�ra e�itledik ka� islem yap�ld���n� sayacak.
    
    printf("-->negatif olmayan 2 sayi giriniz: "); //kullan�c�dan say� girmesini istiyoruz.
    scanf("%d %d", &num1, &num2);
    printf("\n");
    
    if(num1<0 || num2<0){  // e�er girilen say�lardan 1 tanesi bile negatif ise bu blo�a girecek ve hatan�n d�zeltilmesi istenerek tekrar kullan�c�dan 2 sayi al�nacak.
        printf("<<< HATA! >>>\n");
    	printf("-->girdiginiz sayilar negatif olmamali lutfen tekrar 2 sayi giriniz:");
    	scanf("%d %d",&num1,&num2);
    	printf("\n");
	}
    while (num1 != 0 && num2 != 0) {  //num1 ve num2 s�f�rdan farkl�ysa burdaki i�lemler ger�ekle�ecektir.
        if (num1 >= num2) {  //e�er num1 b�y�k ve e�it ise num2'ye,
            num1 -= num2;    //num1 de�i�keninden num2 de�i�kenini ��kar�p, sonucu tekrar num1 de�i�kenine atar.
        } else {             //if ko�ulundaki ifade sa�lanm�yorsa,
            num2 -= num1;    //num2 de�i�keninden num1 de�i�kenini ��kar�p, sonucu tekrar num2 de�i�kenine atar.
        }
        islem++;   //islem say�s� 1 art�r�l�rr.
    }

    printf("-->num1 veya num2'yi sifir yapmak icin gereken islem sayisi: %d", islem);
    return 0;
}




