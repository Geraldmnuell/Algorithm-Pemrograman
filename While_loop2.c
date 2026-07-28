#include <stdio.h>

int main() {
    // USING ++;
    int i = 0;
    while (i < 5) {
        printf("Number total is %d\n", i);
        i++;
    }

    // USING --;
    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Slebewww\n");

    // BEBAS MAU TAMBAH BERAPA ANGKA:)
    int angka = 0;

    while (angka <= 10) {
        printf("%d\n", angka);
        angka = angka + 2; // begitupun dalam operasi pengurangan
    }
    
    // REVERSE NUMBER
    int numbers = 12345;
    int revNumbers = 0;

    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers = numbers / 10;
    }
    printf("%d\n", revNumbers);

    // PERULANGAN WHILE MENGGUNAKAN IF ELSE
    int gerald = 1;
    while (gerald <= 6) {
        if (gerald < 6) {
            printf("Bukan Gerald\n");
        } else {
            printf("Nah baru gerald!!");
        }
        gerald++;
    }
    return 0;
}