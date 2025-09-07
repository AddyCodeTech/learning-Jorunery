/* 
Variables:- 

Variables are used to store data in a program. In C, you must declare a variable before using it,
specifying its type and name. Common data types include int (integer), float (floating-point number),
char (character), and more. 
for example: 
to print an integer variable, you can use the %d format specifier in printf.
to print a float variable, you can use the %f format specifier in printf.
to print a char variable, you can use the %c format specifier in printf.
*/

#include <stdio.h>

int main() {
    printf("Variables in C\n");
    int myNum = 5;
    printf("int variable: %d\n", myNum);
    float myFloat = 3.14;
    printf("float variable: %.2f\n", myFloat);
    char myChar = 'A';
    printf("char variable: %c\n", myChar);
    return 0;
}