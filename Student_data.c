#include <stdio.h> // libary for input and output

int main() { // Fungsi utama, start the program
    char name[] = "Gerald";
    printf("Hello %s\n", name); // menampilkan output 
    printf("How are you today?\n");

    int myNum = 18;
    printf("My Num is %d\n", myNum); 
    
    int x = 10;
    int y = 10;
    int sum = x + y;
    printf("10 + 10= %d", sum);

    printf("\n=====STUDENT DATA=====\n");
    // Student DATA
    char fullname[] = "Gerald Imanuel Manongga";
    int studentID = 2502;
    int studentAGE = 18;
    float studentfee = 4.0;
    char studentClass = 'A';

    // Print variable
    printf("NAME  : %s\n", fullname);
    printf("NIM   : %d\n", studentID);
    printf("AGE   : %d\n", studentAGE);
    printf("UKT   : %f\n", studentfee);
    printf("CLASS : %c", studentClass);
    
    return 0; // the program end with succesfully
}
