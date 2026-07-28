#include <stdio.h>

int read_n(int *n) {
    if (scanf("%d", n) != 1) {
        printf("INVALID\n");
        return 0;
    }
    if (*n < 1 || *n > 100) {
        printf("INVALID\n");
        return 0;
    }
    return 1;
}

int read_array(long long array[], int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &array[i]) != 1) {
            printf("INVALID\n");
            return 0;
        }
    }
    return 1;
}

void stats_array(long long array[], int n) {
    long long min = array[0];
    long long max = array[0];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] < min)
            min = array[i];

        if (array[i] > max)
            max = array[i];

        sum += array[i];
    }

    double average = (double)sum / n;

    printf("%lld %lld %lld %.2f\n", min, max, sum, average);
}

int main() {
    int n;
    long long array[105];

    if (!read_n(&n))
        return 0;

    if (!read_array(array, n))
        return 0;

    stats_array(array, n);

    return 0;
}