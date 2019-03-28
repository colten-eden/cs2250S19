/*
 * =====================================================================================
 *
 *       Filename:  open_files.c
 *
 *    Description:  Opening a file for creation and edit
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:33:48 AM
 *       Revision:  none
 *       Compiler:  gcc open_files.c -o open_files.out -lm
 *          Usage:  ./open_files.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  // for FILE pointer
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    int num;
    // 1) open a file: ptr = fopen("fileToOpen", "mode")
    fptr = fopen("program.txt", "w");
    // chekc if it works
    if(fptr == NULL)
    {
        printf("Error! Could not open file for writing\n");
        exit(1);
    }
    // 2) Read/write to/ from file
    printf("Enter a number: ");
    scanf("%d", &num);
    // Write to file: fprintf()
    fprintf(fptr, "%d\n", num);
    // 3) close the file: fclose(ptr)
    fclose(fptr);

    return 0;
}
// Function Defenitions


