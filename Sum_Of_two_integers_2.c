// Natural Number = 1,2,3,4,5,...
// Whole Number = 0,1,2,3,4,5,...
// Integer ...,-3,-2,-1,0,1,2,3,..

/*  Note:
    Data types in C programming
    1.int
    2.char
    3.float
    4.double

    Escape Sequence
    \n = new line
    \t = horizontal tab
    \v = vertical tab
    \a = alarm
    \\ = backslash


*/

#include <stdio.h>

int main(){

    int number1 = 0;
    int number2 = 0;
    int total = 0;

    printf("Pleaset enter first number: ");
    scanf("%d", &number1); // & address operator
    printf("Please enter second number: ");
    scanf("%d", &number2);

    total = number1 + number2;

    printf("The total number of %d and %d is %d\n", number1, number2, total);

    return 0;
}
