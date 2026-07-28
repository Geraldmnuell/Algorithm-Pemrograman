#include <stdio.h>

// Void = is not have a return Value
// Function name as example : void myNameFunction() {
 // }

void callFunction() {
    int x = 10;
    int y = 5;
    int sum = x + y;
    int kurang = x - y;
    int kali = x * y;
    int bagi = x / y;
    printf("Hasil Penjumlahan : %d\n", sum);
    printf("Hasil Pengurangan : %d\n", kurang);
    printf("Hasil Perkalian : %d\n", kali);
    printf("Hasil Pembagian : %d", bagi);
}

int main() {
    callFunction();
    return 0;
}

