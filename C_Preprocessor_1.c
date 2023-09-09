/*
    Reference book: DSA
    Author: Dr.Win Htut
    Credit to #Win Htut

*/

// Note for me
// #include <Preprocessor Directive>
/*
    C preprocessor directive modifies the C source code file
    before the compiler compiles the C source code.
    In other words, before executing the C source code, the source code
    must be built. After building successfully without error, the source code can be run.
    When we build the source code, we must add the header file to the source code file.

    There are three preprocessor
    1. directives
    2. constants
    3. macros

    When we declare directives preprocessor,
    they start with a sharp sign(#).
    #include <stdio.h>
    # Sign commands to include the standard input output file into the source code
    when compiling the source code file by compiler.
    Standard input-output library function: printf,scanf
    #include <conio.H>
    <conio.h> console input/output header file
    Console input/output library function: getch();

    int main(void) is the program's entry point.
*/
    // single line comment

    /* Multiple
       line
       comment */

    /*
        The compiler will ignore the comments when the program is executing.
        The advantages of comments are
        I. easy to understand
        II. easy to trace
        III.  Easy to debug
        ..etc.

    */

#include <stdio.h> // stdio.h is the standard input/output header file or library.
                   // It is needed for the function printf.
                   // print means prompt the output on the terminal or screen.
                   // f is for formatting the output string.

int main(void){ 
    // program entry point means the program starts running from here.
    // The program runs in the sequence of instructions or statements.
    // A statement ends when the compiler finds the semicolon sign;


    printf("Welcome From Myanmar!");

    return 0;
}

