/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 08:34:20 AM
 *       Revision:  none
 *       Compiler:  gcc pointers.c -o pointers.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void PrintValues(int num, const int* p_num);
// Main Function
int main(int argc, char* argv[])
{
    int i =7;
    int* pi = &i;   // It can store address of integer variables
    PrintValues(i, &i); // use the address of the variable
    // Modify i
    i*=2;
    PrintValues(i, pi);; // use the pointer to the variable
    //Change value via the pointer
    *pi = 99; // use the dereference operator to update value
    // at the address
    //
    PrintValues(i, pi); 

    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintValues
 *  Description:  Print the values of an integer and a pointer to an integer
 *  Param: num :  integer
 *  Param: p_num: pointer to integer
 * =====================================================================================
 */
void PrintValues(int num, const int* p_num)
{

       // It can store address of integer variables
    printf("The value of i = %d and pi=[%d]\n",num, *p_num);
//    printf("The value of pi = %p address pi=[%p]\n",pi, &pi);
//    printf("Value at the address of pi = %d \n",*pi);
      return;
}




