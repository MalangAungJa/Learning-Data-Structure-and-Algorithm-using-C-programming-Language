/*
    * = multiplication
    / = division
    % = modulus
    + = add
    - = subtract


*/

#include <stdio.h>

int main() {

    int a = 15;
    int b = 10;

    int z = a * b; // a and b are operands. * is the opcode
    printf("The multiplication of %d and %d is %d.\n", a, b, z);

    z = a + b;
    printf("The sum of %d and %d is %d.\n", a, b, z);

    z = a - b;
    printf("The subtract of %d and %d is %d.\n", a, b, z);

    z = a / b;
    printf("The division of %d and %d is %d.\n", a, b, z);

    z = a % b;
    printf("The modulus of %d and %d is %d.\n", a, b, z);

    return 0;
}
