/*
 * =====================================================================================
 *
 *       Filename:  mainArgs.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:19:16 AM
 *       Revision:  none
 *       Compiler:  gcc mainArgs.c -o mainArgs.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    printf("Argument count is: %d\n", argc);
    printf("Program Name [%s]\n", argv[0]);// argc[0] the program name
    
    for(int i =0; i < argc; i+= 1)
    {
         printf("Argv 0 [%s]\n", argv[1]);
    }
    return 0;
}
// Function Definitions


