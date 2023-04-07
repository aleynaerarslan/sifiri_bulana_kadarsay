#include <stdio.h>
#include <stdlib.h>

//Aleyna Erarslan
//soru: sýfýrý bulana kadar say.
int main(int argc, char *argv[]) {
	
    int num1, num2, islem = 0; // num1,num2 adýnda 2 tam sayi deðiþkeni tanýmladýk.Ve islem adýndaki deðiþkeni sýfýra eþitledik kaç islem yapýldýðýný sayacak.
    
    printf("-->negatif olmayan 2 sayi giriniz: "); //kullanýcýdan sayý girmesini istiyoruz.
    scanf("%d %d", &num1, &num2);
    printf("\n");
    
    if(num1<0 || num2<0){  // eðer girilen sayýlardan 1 tanesi bile negatif ise bu bloða girecek ve hatanýn düzeltilmesi istenerek tekrar kullanýcýdan 2 sayi alýnacak.
        printf("<<< HATA! >>>\n");
    	printf("-->girdiginiz sayilar negatif olmamali lutfen tekrar 2 sayi giriniz:");
    	scanf("%d %d",&num1,&num2);
    	printf("\n");
	}
    while (num1 != 0 && num2 != 0) {  //num1 ve num2 sýfýrdan farklýysa burdaki iþlemler gerçekleþecektir.
        if (num1 >= num2) {  //eðer num1 büyük ve eþit ise num2'ye,
            num1 -= num2;    //num1 deðiþkeninden num2 deðiþkenini çýkarýp, sonucu tekrar num1 deðiþkenine atar.
        } else {             //if koþulundaki ifade saðlanmýyorsa,
            num2 -= num1;    //num2 deðiþkeninden num1 deðiþkenini çýkarýp, sonucu tekrar num2 deðiþkenine atar.
        }
        islem++;   //islem sayýsý 1 artýrýlýrr.
    }

    printf("-->num1 veya num2'yi sifir yapmak icin gereken islem sayisi: %d", islem);
    return 0;
}




