
#include <stdio.h>

int main() {
    int daya;
    float pemakaian;

    printf("=== PROGRAM GOLONGAN TARIF LISTRIK ===\n");

    printf("Masukkan daya listrik (VA): ");
    scanf("%d", &daya);

    printf("Masukkan pemakaian listrik (kWh): ");
    scanf("%f", &pemakaian);

    if (daya <= 900) {
        if (pemakaian <= 100) {
            printf("Golongan: Subsidi\n");
        } else {
            printf("Golongan: Rumah Tangga 1\n");
        }
    } 
    else if (daya <= 1300) {
        if (pemakaian <= 200) {
            printf("Golongan: Rumah Tangga 2\n");
        } else {
            printf("Golongan: Rumah Tangga Tinggi\n");
        }
    } 
    else if (daya <= 2200) {
        if (pemakaian <= 300) {
            printf("Golongan: Menengah\n");
        } else {
            printf("Golongan: Menengah Tinggi\n");
        }
    } 
    else {
        if (pemakaian <= 500) {
            printf("Golongan: Bisnis\n");
        } else {
            printf("Golongan: Bisnis Tinggi\n");
        }
    }

    return 0;
}
