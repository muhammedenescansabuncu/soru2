#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return 1; // Aranan eleman dizide bulundu
        }
    }
    return 0; // Aranan eleman dizide bulunamad�
}

int main() {
    // a) Dizinin boyutunu ve elemanlar�n� kullan�c�dan isteyiniz.
    int size;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Dizinin %d. eleman�n� girin: ", i+1);
        scanf("%d", &arr[i]);
    }

    // b) Dizide aranacak olan eleman� kullan�c�dan isteyiniz.
    int aranan;
    printf("Aranacak eleman� girin: ");
    scanf("%d", &aranan);

    // c) Aran�lan eleman�n dizide olup olmad���n�n kontrol�n� Linear Search kullanarak yap�n�z.
    if (linearSearch(arr, size, aranan)) {
        printf("Aranan eleman dizide bulunuyor.\n");
    } else {
        printf("Aranan eleman dizide bulunmuyor.\n");
    }

    return 0;
}

