/*
 * =====================================================================================
 *
 *       Filename:  read_file.c
 *
 *    Description:  Open files for reading purposes
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:48:21 AM
 *       Revision:  none
 *       Compiler:  gcc read_file.c -o read_file.out -lm
 *          Usage:  ./read_file.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    int num;
    // 1) open a file: ptr = fopen("fileToOpen", "mode")
    if((fptr = fopen("program.txt", "r")) == NULL) // for reading
    // chekc if it works
    {
        printf("Error! Could not open file for writing\n");
        exit(1);
    }
    // Begin reading from file
    fscanf(fptr, "%d", &num);
    printf("Read %d from input file\n", num);

    // Close file
    fclose(fptr);


    return 0;
}
// Function Defenitions


