#include <stdio.h>

int main() {
    int baris, kolom;
    scanf("%d", &baris);
    scanf("%d", &kolom);
    
    int matriks[baris][kolom];
    
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("%d ", matriks);
    
	return 0;
}