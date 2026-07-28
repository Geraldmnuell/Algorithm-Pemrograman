#include <stdio.h>

int main() {
    int day;
    printf("Choose your day : ");
    scanf("%d", &day);

    // SWITCH ONLY USING INPUT USERS
    switch (day) {
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Happy Sunday\n");
        break;
    }

    // SWITCH WITH DEFAULT
    int Day = 4;
    switch (Day) {
        case 6:
        printf("Today is saturday");
        break;
        case 7:
        printf("Today is Sunday");
        break;
        default:
        printf("Looking forward to the weekend, See you later...");
    }
    return 0;
}