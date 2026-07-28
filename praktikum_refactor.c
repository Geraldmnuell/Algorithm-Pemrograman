#include <stdio.h>
#include <string.h>

int main() {
    int row, column;

    if (scanf("%d %d", &row, &column) != 2) {
        puts("INVALID");
        return 0;
    }

    if (row < 1 || row > 20 || column < 1 || column > 20) {
        puts("INVALID");
        return 0;
    }

    long long array[25][25];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (scanf("%lld", &array[i][j]) != 1) {
                puts("INVALID");
                return 0;
            }
        }
    }

    char command[30];

    if (scanf("%s", command) != 1) {
        puts("INVALID");
        return 0;
    }

    if (strcmp(command, "SUMROW") == 0) {

        for (int i = 0; i < row; i++) {
            long long sum = 0;

            for (int j = 0; j < column; j++) {
                sum += array[i][j];
            }

            if (i)
                printf(" ");

            printf("%lld", sum);
        }

        printf("\n");

    } else if (strcmp(command, "SUMCOL") == 0) {

        for (int j = 0; j < column; j++) {
            long long sum = 0;

            for (int i = 0; i < row; i++) {
                sum += array[i][j];
            }

            if (j)
                printf(" ");

            printf("%lld", sum);
        }

        printf("\n");

    } else if (strcmp(command, "TRANSPOSE") == 0) {

        for (int j = 0; j < column; j++) {
            for (int i = 0; i < row; i++) {

                if (i)
                    printf(" ");

                printf("%lld", array[i][j]);
            }

            printf("\n");
        }

    } else {
        puts("INVALID");
    }

    return 0;
}