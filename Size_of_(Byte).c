#include <stdio.h>

int main() {
    printf("My Name is gerald, so i will learn C leangue programming\n");
    float f1 = 35e3;
    double d1 = 12E4;
    printf("%f\n", f1);
    printf("%lf\n", d1);
    
    // set decimal decision
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;
    printf("%f\n", myFloatNum);
    printf("%lf\n", myDoubleNum);
    
    float num = 3.5;
    printf("%f\n", num); // default will show 6 digits after the decimal point
    printf("%.1f\n", num); // only show 1 digits
    printf("%.2f\n", num); // only show 2 digits
    printf("%.4f\n", num); // only show 4 digits
    
    // memory of size
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    printf("Int : %zu byte\n", sizeof(myInt)); //  2 or 4 bytes
    printf("Float : %zu byte\n", sizeof(myFloat)); // 4 bytes
    printf("Double : %zu byte\n", sizeof(myDouble)); // 8 bytes
    printf("Char : %zu byte\n", sizeof(myChar)); // 1 bytes

    // Real life example :
    // create variable of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';
    
    // prints variables
    printf("Number of items = %d\n", items);
    printf("Cost per item = %.2f%c\n", cost_per_item, currency);
    printf("Total cost = %.2f%c\n", total_cost, currency);
    return 0;
}