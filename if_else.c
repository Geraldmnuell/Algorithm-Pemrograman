#include <stdio.h>
#include <stdbool.h>

int main() {
    // IF CONDITION
    int x = 10;
    int y = 8;
    int result = x > y;

    if (result) {
        printf("true\n");
    }

    // ELSE CONDITION
    int morning = 7;
    int night = 9;
    if (morning > night) {
        printf("Good Morning!");
    } else {
        printf("Good Night!\n");
    }

    // ELSE IF CONDITION
    int num = 15;
    
    if (num < 10) {
        printf("Noo broo");
    } else if (num < 20) {
        printf("Good broow\n");
    } else {
        printf("Dahlah");
    }

    // TERNARY OPERATION
    int time = 20;
    (time < 18) ? printf("Good day") : printf("Good evening\n");

    // NESTED IF
    int num1 = 15;
    int num2 = 20;

    if (num1 > 10) {
        printf("Num1 is greater than 10\n");
        if (num2 > 18) {
            printf("Num2 also is greater than 20\n");
        }
    }

    int age = 20;
    bool isCitizen = true;
    int umur = 100;
    bool notCitizen = false;
    if (age > 18) {
        printf("Ayo kita memilih!\n");
        if (isCitizen) {
            printf("Lengkapi persyaratan memilih terlebih dahulu!\n");
            if (umur > 50) {
                printf("Persyaratan belum lengkap, mohon lebih di lengkapi lagi!\n");
                if (notCitizen) {
                    printf("Persyaratan hampir lengkap!");
                } else {
                    printf("Persyaran berhasil dilengkapi, TERIMA KASIH!!!\n");
                }
            } else {
                printf("Persyaratan sudah lengkap!!");
            }
        } else {
            printf("Persyaratan sudah lengkap!!");
        }
    } else {
        printf("Maaf kamu belum boleh memilih");
    }

    // LOGICAL OPEARATORS
    bool isLogin = true;
    bool isAdmin = false;
    int securityLevels = 5;

    if (isLogin && (isAdmin || securityLevels <= 2)) {
        printf("Acces Granted!");
    } else {
        printf("Acces denied!");
    }
    return 0;
}