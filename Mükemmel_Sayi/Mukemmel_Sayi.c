#include <stdio.h>
 
/*
	
	Programmer: Ahmet YILMAZ
	# Mukemmel_Sayi #


*/
 
 
int main() {
 	
 	int i;
    int sayi, toplam = 0;
 
    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);
 
    for (i = 1; i < sayi; i++) {
        if (sayi % i == 0)
            toplam += i;
 
    }
 
    if (toplam == sayi)
        printf("%d Mukemmel sayidir", sayi);
    else
        printf("%d Mukemmel sayi degildir", sayi);
 
    return 0;
}
