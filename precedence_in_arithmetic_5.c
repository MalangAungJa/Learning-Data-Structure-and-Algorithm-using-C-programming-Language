#include <stdio.h>

int main(){

    int x = 0;
    int y = 5;
    int z = 10;
    int a = 15;
    int b = 20;
    int i = 25;
    int j = 30;
    int k = 35;
    int c = 40;
    int e = 45;
    int f = 100;
    int g = 55;
    int h = 60;

    // precedence (),*,/,%,+,- (Left To Right)
    x = y + z*(a+b) + (i+j)*k*c*e%f/g%h/10-5;
    x = 5 + 10*(15+20) + (25+30)*35*40*45%100/55%60/10-5;

    // Precedence Left To Right => (),*,/,%,+,-
    //Step 1    x = 5 + 350 + (25+30)*35*40*45%100/55%60/10-5; # where calculate () first, (15+20) = 35 then 10*35 = 350 (Left to right) 
    //Step 2    x = 5 + 350 + 55*35*40*45%100/55%60/10-5;  # where (25+30) = 55  Note: ()
    //Step 3    x = 5 + 350 + 1925*40*45%100/55%60/10-5;  # where 55*35 = 1925    Note: *
    //Step 4    x = 5 + 350 + 77000*45%100/55%60/10-5;  # where 1925*40 = 77000     Note: *
    //Step 5    x = 5 + 350 + 77000*45%100/55%60/10-5;  # where 77000*45 = 3465000     Note: *
    //Step 6    x = 5 + 350 + 3465000 % 1 % 60/10-5;    # where 100/55 = 1          Note: /
    //Step 7    x = 5 + 350 + 3465000 % 1 % 6 - 5;    # where 60/10 = 6        Note: /
    //Step 8    x = 5 + 350 + 3465000 % 6 - 5;    # where 3465000 % 1 = 0      Note: %
    //Step 9    x = 5 + 350 + 0 - 5;    # where 0 % 6 = 0           Note: %                   
    //Step 10   x = 355 + 0 - 5;    # where 5 + 350 = 355        Note: +
    //Step 11   x = 355 - 5;        # where 355 + 0 = 355        Note: +
    //Step 12   x = 350;            # where 355 - 5;             Note: -
    printf("The precedence in arithmetic is %d\n", x);


    return 0;
}
