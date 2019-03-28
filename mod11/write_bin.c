/*
 * =====================================================================================
 *
 *       Filename:  write_bin.c
 *
 *    Description:  Write to a file in binary mode
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:54:12 AM
 *       Revision:  none
 *       Compiler:  gcc write_bin.c -o write_bin.out -lm
 *          Usage:  ./write_bin.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants
typedef struct threeNum
{
    int num1;
    int num2;
    int num3;
}threeNumbers;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    threeNumbers nums;  // declare a structure
    // 1) open a file: ptr = fopen("fileToOpen", "mode")
    if((fptr = fopen("program.bin", "wb")) == NULL) // for reading
    // chekc if it works wb is write binary
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    // Write to file 
    for(int n = 1; n < 5; n++)
    {
        nums.num1 = n;
        nums.num2 = 5*n;
        nums.num3 = 5*n + 1;
        //To write binary data use:
        //fwrite(address_data, size_data, numers_data, pointer to file)
        fwrite(&nums, sizeof(threeNumbers), 1, fptr);
    } // end of loop
    // Close file
    fclose(fptr);

    return 0;
}
// Function Defenitions


