#include <stdio.h>

int main() {
    int maxScore = 500;
    int userScore = 423;
    
    float percentage = maxScore / userScore * 100.0;
    printf("The percentage is %.2f\n", percentage);
    
    int sum1 = 20 + 20;
    int sum2 = sum1 + 40;
    int sum3 = sum2 + sum1;
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    return 0;
}