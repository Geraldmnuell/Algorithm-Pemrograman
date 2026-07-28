#include <stdio.h>

int main() {
    float x = (float) 5/2;
    printf("%.1f\n", x);

    const int umur = 20;
    printf("Umur = %d\n", umur);

    int z = 5;
    ++z;
    printf("%d\n", z);
    --z;
    printf("%d\n", z);

    int myAge = 18;
    printf("%d\n", myAge >= 18);
    printf("%d\n", myAge < 18);

    int sum1 = 5;
    int y = 3;
    printf("%d\n", sum1 < 4 && sum1 < 7); // false and true
    printf("%d\n", sum1 > 2 || sum1 > 8); // true or false
    printf("%d\n", !(y > 2 && y < 5)); // true and true
    return 0;
    
}