#include <stdio.h>

int main()
{
    int n;
    int fact = 1;
    
    printf("Faktoriyel istenen sayi: ");
    scanf("%d",&n);
    
    while(n != 0){
        fact = fact * n;
        n--;
    }
    printf("%d",fact);

    return 0;
}
