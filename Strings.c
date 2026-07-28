#include <stdio.h>
#include <string.h>

int main() {
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    printf("%zu\n", sizeof(greetings));
    printf("%zu\n", sizeof(greetings2));

    char message[] = "Nice to meet you";
    char fname[] = "Geraldd";
    printf("%s %s!\n", message, fname);

    // SPECIAL CHARACTER
    char kalimat[] = "Hello brother \'gerald\', How are you today?"; // Escape char \'
    char answer[] = "Hello \"ungke\", I'm good"; // Escape char \"
    char slash[] = "TRUE \\ FALSE"; // Escape char \\
    printf("%s\n", kalimat);
    printf("%s\n", answer);
    printf("%s\n", slash);

    // CONCATENATE STRING
    char s1[] = "Hello ";
    char s2[] = "World";
    strcat(s1, s2);
    printf("%s\n", s1);

    // COPY STRING
    char str1[30] = "Its all about syntaxx";
    char str2[30];
    strcpy(str2, str1);
    printf("%s\n", str2);

    // COMPARE STRING
    char word1[] = "Hello";
    char word2[] = "Hello";
    char word3[] = "Hi";
    printf("%d\n", strcmp(word1, word2));
    printf("%d\n", strcmp(word1, word3));
    return 0;
}