// Vize Notu Hesaplama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>
// vize1: %30 , vize2: %30 ,final: %40

int main()
{
    int vize1Notu, vize2Notu, finalNotu;
    double totalNot = 0;
    
    printf("Vize 1 Notunuzu giriniz: ");
    scanf_s("%d", &vize1Notu);
    
    printf("Vize 2 Notunuzu giriniz: ");
    scanf_s("%d", &vize2Notu);

    printf("Final Notunuzu giriniz : ");
    scanf_s("%d", &finalNotu);

    totalNot = vize1Notu * 0.30 + vize2Notu * 0.30 + finalNotu * 0.40;

    if (totalNot > 90)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: AA", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else if (totalNot > 85)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: BA", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else if (totalNot > 80)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: BB", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else if (totalNot > 75)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: CB", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else if (totalNot > 70)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: CC", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else if (totalNot > 65)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: DC", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else if (totalNot > 60)
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: DD", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    else
    {
        printf("Vize1: %d - Vize2: %d - Final: %d - Ortalama: %f - Harfnotu: FF (KALDI) ", vize1Notu, vize2Notu, finalNotu, totalNot);
    }
    
    
}

