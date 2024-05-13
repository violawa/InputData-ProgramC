#include <stdio.h>

int main() {
    // Deklarasi variabel
    int nim;
    char nama[50];
    int umur;
    float target_ipk;

    // Meminta input dari pengguna
    printf("Masukkan NIM: ");
    scanf("%d", &nim);

    printf("Masukkan nama lengkap: ");
    scanf(" %[^\n]s", nama); // Menerima input string dengan spasi

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan target IPK: ");
    scanf("%f", &target_ipk);

    // Menampilkan kembali informasi yang dimasukkan
    printf("\nData yang dimasukkan:\n");
    printf("NIM: %d\n", nim);
    printf("Nama lengkap: %s\n", nama);
    printf("Umur: %d\n", umur);
    printf("Target IPK: %.2f\n", target_ipk);

    return 0;
}
