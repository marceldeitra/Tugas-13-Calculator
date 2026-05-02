#include <stdio.h>

float mul(float a, float b) {
    return a * b;
}

float divide(float a, float b, int *error) {
    if (b == 0) {
        *error = 1;
        return 0;
    }
    *error = 0;
    return a / b;
}

int main() {
    int pilihan, error = 0;
    float a, b;

    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Perkalian\n");
    printf("2. Pembagian\n");
    printf("Pilih: ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    if (pilihan == 1) {
        printf("Hasil: %.2f\n", mul(a, b));
    } 
    else if (pilihan == 2) {
        float hasil = divide(a, b, &error);
        if (error) {
            printf("Error: tidak bisa bagi dengan nol!\n");
        } else {
            printf("Hasil: %.2f\n", hasil);
        }
    } 
    else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}
