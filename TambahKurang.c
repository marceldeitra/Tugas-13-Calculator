#include <stdio.h>

float add(int a, int b) {
    return a + b;
}

float sub(int a, int b) {
    return a - b;
}

int main() {
    int pilihan, a, b;
    float hasil;

    printf("Kalkulator\n");
    printf("1. Penambahan\n");
    printf("2. Pengurangan\n");
    printf("Pilih operasi: ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);

    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    switch (pilihan) {
        case 1:
            hasil = add(a, b);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 2:
            hasil = sub(a, b);
            printf("Hasil: %.2f\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
