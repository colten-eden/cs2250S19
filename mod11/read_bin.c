/*
 * =====================================================================================
 *
 *       Filename:  read_bin.c
 *
 *    Description:  Read from a binary file
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:05:42 AM
 *       Revision:  none
 *       Compiler:  gcc read_bin.c -o read_bin.out -lm
 *          Usage:  ./read_bin.out
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
    if((fptr = fopen("program.bin", "rb")) == NULL) // for reading
    // chekc if it works wb is write binary
    {
        printf("Error! Could not open file\n");
        exit(1);
    }

    // Reading file
    for(int n = 1; n < 5; n++)
    {
        nums.num1 = n;
        nums.num2 = 5*n;
        nums.num3 = 5*n + 1;
        //To write binary data use:
        //fread(address_data, size_data, numers_data, pointer to file)
        fread(&nums, sizeof(threeNumbers), 1, fptr);
        printf("num1:%d\t num2:%d\t num3:%d\n", nums.num1, nums.num2,
                nums.num3);
    } // end of loop
    // Close file
    fclose(fptr);

    return 0;
}
// Function Defenitions


