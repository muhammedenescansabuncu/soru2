#include <stdio.h>

int binarySearch(int dizi[], int sol, int sag, int aranan) {
    if (sag >= sol) {
        int orta = sol + (sag - sol) / 2;
        
        // Aranan de�er ortada m�?
        if (dizi[orta] == aranan)
            return orta;
        
        // Aranan de�er sol yar�da m�?
        if (dizi[orta] > aranan)
            return binarySearch(dizi, sol, orta - 1, aranan);
        
        // Aranan de�er sa� yar�da m�?
        return binarySearch(dizi, orta + 1, sag, aranan);
    }
    
    // Aranan de�er bulunamad�
    return -1;
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int aranan;
    
    printf("Aranacak degeri giriniz: ");
    scanf("%d", &aranan);
    
    int sonuc = binarySearch(dizi, 0, boyut - 1, aranan);
    
    if (sonuc == -1)
        printf("Aranan deger bulunamadi.\n");
    else
        printf("Aranan deger %d. indekste bulundu.\n", sonuc);
    
    return 0;
}
