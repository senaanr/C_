#include <stdio.h>
//Rakamlar toplamını ve kaç basamaklı olduğunu bulan program
int main()
{
    int n,hane = 0, toplam = 0;
    
    printf("Sayı giriniz: ");
    scanf("%d",&n);
    
    do {
        toplam += (n%10);
        hane++;
        n = n/10; 
    }
    while(n>0);
    
    printf("Rakamlar toplamı: %d ve %d haneli",toplam,hane);
    
}
