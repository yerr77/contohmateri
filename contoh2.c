#include <stdio.h>
int main() {
    FILE *fp;

    //membuka file
    fp = fopen("catatan.txt", "w"); 

    //mengecek file 
    if (fp == NULL){
        printf("file tidak dapat dibuka.\n");
    return 1;
    }

    fprintf(fp, "halo nama saya wowok.\n");
    fprintf(fp, "NIM saya 1234567890.\n");
    fprintf(fp, "Nilai :100");
    fclose(fp);

    printf("file berhasil dibuat.");
    return 0;
}

