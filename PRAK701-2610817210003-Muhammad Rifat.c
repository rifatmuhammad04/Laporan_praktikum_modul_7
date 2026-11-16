#include <stdio.h>
#include <string.h>
int main() {
    char depan[50], belakang[50], lengkap[100];
    int panjang;

    printf("Nama Depan : ");
    scanf("%s", depan);
    printf("Nama Belakang : ");
    scanf("%s", belakang);

    strcpy(lengkap, depan);
    strcat(lengkap, " ");
    strcat(lengkap, belakang);

    panjang = strlen(depan) + strlen(belakang);

    printf("Nama Lengkap : %s\n", lengkap);
    printf("Panjang Nama (tanpa spasi) : %d\n", panjang);
    return 0;
}