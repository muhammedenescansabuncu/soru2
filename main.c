#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return 1; // Aranan eleman dizide bulundu
        }
    }
    return 0; // Aranan eleman dizide bulunamadı
}

int main() {
    // a) Dizinin boyutunu ve elemanlarını kullanıcıdan isteyiniz.
    int size;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Dizinin %d. elemanını girin: ", i+1);
        scanf("%d", &arr[i]);
    }

    // b) Dizide aranacak olan elemanı kullanıcıdan isteyiniz.
    int aranan;
    printf("Aranacak elemanı girin: ");
    scanf("%d", &aranan);

    // c) Aranılan elemanın dizide olup olmadığının kontrolünü Linear Search kullanarak yapınız.
    if (linearSearch(arr, size, aranan)) {
        printf("Aranan eleman dizide bulunuyor.\n");
    } else {
        printf("Aranan eleman dizide bulunmuyor.\n");
    }

    return 0;
}

