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
    In another word, before excuting the C source code, the source code
    must be built. After building successfully without error, the source code can be run.
    When we build the source code, we must add the header file into the source code file.

    There are three preprocessor
    1. directives
    2. constants
    3. macros

    When we declare directives preprocessor,
    they start with sharp sign(#).
    #include <stdio.h>
    # sign commands to include the standard input output file into the source code
    when we compiling the source code file by compiler.
    Standard input output library function: printf,scanf
    #include <conio.H>
    <conio.h> console input/output header file
    Console input/output library function: getch();

    int main(void) is program's entry point.
*/
    // single line comment

    /* Multiple
       line
       comment */

    /*
        Compiler will ignore the comments when program is executing.
        Advantage of comments is
        I. easy to understand
        II. easy to trace
        II.  esay to debug


    */

#include <stdio.h> // stdio.h is the standard input/output header file or library.
                   // It is needed for the function printf.
                   // print means prompt the output on the terminal or screen.
                   // f is for format the output string.

int main(void){ // program entry point means that the program starts to run from here.
                // The program runs in sequence of instructions or statements.
                // A statement ends when the compiler found the simicolon sign ; .


    printf("Welcome From Myanmar!");

    return 0;
}

