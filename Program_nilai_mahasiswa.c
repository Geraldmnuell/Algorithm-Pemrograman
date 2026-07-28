#include <stdio.h>

int main() {
    char nama[50];
    float nilai_tugas, nilai_uts, nilai_uas;
    float nilai_akhir;

    printf("Masukkan nama mahasiswa : ");
    fgets(nama, sizeof(nama), stdin);

    printf("Nilai TUGAS : ");
    scanf("%f", &nilai_tugas);

    printf("Nilai UTS : ");
    scanf("%f", &nilai_uts);

    printf("Nilai UAS : ");
    scanf("%f", &nilai_uas);

    nilai_akhir = (0.3 * nilai_tugas) + (0.3 * nilai_uts) + (0.4 * nilai_uas);
    
    printf("=====PROGRAM NILAI MAHASISWA=====\n");
    printf("Nama Mahasiswa : %s", nama);
    printf("NIM : 250211060004\n");
    printf("PRODI : Teknik Informatika\n");
    printf("Fakultas Teknik Universitas Sam Ratulangi\n");
    printf("Nilai Akhir : %.2f", nilai_akhir);

    return 0;
}