#include <stdio.h>
#include <string.h>

int main() {
    char pilihan[50];
    double a, b, hasil;
    const char *nama;
    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%49s", pilihan);

        if (strcmp(pilihan, "5") == 0) {
            printf("Terimakasih, telah menggunakan kalkulator IQBAL FAHREZI\n");
            break;
        } else if (strlen(pilihan) == 1 && pilihan[0] >= '1' && pilihan[0] <= '4') {
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);
            if (pilihan[0] == '1') {
                nama = "penjumlahan";
                hasil = a + b;
            } else if (pilihan[0] == '2') {
                nama = "pengurangan";
                hasil = a - b;
            } else if (pilihan[0] == '3') {
                nama = "perkalian";
                hasil = a * b;
            } else {
                nama = "pembagian";
                if (b == 0) {
                    printf("Pembagian dengan 0 tidak bisa dilakukan\n");
                    continue;
                }
                hasil = a / b;
            }
            printf("Hasil %s antara %.2f dengan %.2f adalah %.2f\n", nama, a, b, hasil);
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}