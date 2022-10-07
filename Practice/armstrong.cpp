#include <stdio.h>
#include <conio.h>
 
 
int main(){
    
    int sayi, gecici, sonuc=0, basDegeri;
    
    
    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);
    
    
    gecici = sayi;
    
    while ( gecici > 0 ){
        
        basDegeri = gecici % 10;
        sonuc += basDegeri * basDegeri * basDegeri;
        gecici /= 10;
        
    }
    
    if (sayi == sonuc)
        printf("%d ArmStrong Sayidir", sayi);
    
    else
        printf("%d ArmStrong Sayi Degildir", sayi);
    
    
    getch();
    return 0;
}
