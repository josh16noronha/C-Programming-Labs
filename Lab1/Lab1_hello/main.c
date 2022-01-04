//Name: Joshua Noronha
//ID: 101194076


#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output. */

int main(void)
{
 printf("Hello, world!\n");
 printf("C programming is fun!\n");
 return EXIT_SUCCESS;
}

/*

Q:Did adding the comment have any effect on the output your
program displays?

A: No,adding the comment had no effect on the output as the purpose of
   a comment's primary objective is to make the code more readable.


(a) Remove the closing curly-bracket (}). Save the modified file and build the program.
What warning and/or error messages does the compiler produce?

A1:The error that the compiler produces is error #2001: Syntax error: expected '}' but found 'end of input'.
	Which is a syntax error indicating that the (}) is missing right before the end of the input.


(b) Remove the int before main. Save the modified file and build the program. What
warning and/or error messages does the compiler produce?

A2:The warning that the compiler produces is (6): warning #2099: Missing type specifier; assuming 'int'.
   Which is a missing type specifier warning indicating that the 'int' type is missing on line 6.


c) Change main to mian. Save the modified file and build the program. What warning
and/or error messages does the compiler produce?

A3:The two errors that the compiler produces are POLINK: error: Unresolved external symbol 'main' - referenced from 'crt64.lib(_crt0.obj)', and POLINK: fatal error: 1 unresolved external(s). 
   Which is an error indicating that the external portion symbol "main" is missing or is miss spelled.


(d) Remove the closing (astric/) from the comment. Save the modified file and build the program.
What warning and/or error messages does the compiler produce?

A4:The warning that the compiler produces is (13): warning #1042: EOF inside a comment.
    Which is an error indicating that it is the end of the file inside a comment on line 13.


(e) Change the first occurrence of printf to pintf. Save the modified file and build the
program. What warning and/or error messages does the compiler produce?

A5:The two errors that the compiler produces are POLINK: error: Unresolved external symbol 'pintf' - referenced from 'C:\Users\Raisa\Desktop\Lab 1\hello\output\main.obj', and POLINK: fatal error: 1 unresolved external(s).
   Which is an error indicating that an external symbol called "pintf" is causing an error due to it being miss spelled or not being a known function.


(f) Delete one of the parentheses: ( or ). Save the modified file and build the program. What
warning and/or error messages does the compiler produce?

A6: There are three errors that the compiler produces when I removed the "(" parentheses in front of the printf statement. The errors are
   (8): error #2001: Syntax error: expected ';' but found 'string constant'.
   (8): error #2001: Syntax error: expected ';' but found ')'.
   (8): error #2061: Invalid statement termination.
   The errors are stating that on line 8 instead of the semicolon to end the statement there was a string constant and closing parentheses.


(g) Duplicate one of the parentheses: change a ( to (( or ) to )). Save the modified file and
build the program. What warning and/or error messages does the compiler produce?

A7: There is one error that the compiler produces when I added an extra parentheses, which is (8): error #2001: Syntax error: expected ')' but found ';'.
    The error is on line 8 and it is a syntax error which is indicating that the program expected the closing parentheses but instead got semicolon. thus indicating that the parentheses needs to be closed on line 8.


(h) Delete the semicolon ; after the return statement. What warning and/or error messages
does the compiler produce?

A8: There is one syntax error that the compiler produces, which is (11): error #2001: Syntax error: expected ';' but found '}'.
    The syntax error is indicating that the compiler expected a semicolon but instead found an ending curly bracket on line 11, so to fix this error we have to put a semicolon on line 11.

*/
