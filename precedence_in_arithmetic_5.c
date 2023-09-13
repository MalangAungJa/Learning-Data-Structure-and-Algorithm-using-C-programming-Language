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
    int f = 50;
    int g = 55;
    int h = 60;

    // precedence (),*,/,%,+,- (Left To Right)
    x = y + z*(a+b) + (i+j)*k*c*e%f/g%h/10-5;
    x = 5 + 10*(15+20) + (25+30)*35*40*45%50/55%60/10-5;

    printf("The precedence in arithmetic is %d\n", x);


    return 0;
}
