/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:36 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    int num;
    int num2;
    printf("Enter an even and odd number: ");
    scanf("%d", &num);
    scanf("%d", &num2);
    //test value for even or odd
    if((num + num2) % 2 != 0)
    {
        printf("%d is even and %d is odd\n", num, num2);
    }
    else
    {
        printf("%d and %d are not an even and odd numbers\n", num, num2);
    }
    
    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


