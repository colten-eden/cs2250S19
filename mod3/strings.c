/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:21 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
const int SIZE = 50;
// Main Function
int main()
{
    //A string is a list/collection of characters (array)
    //Strings use %s as the placeholder
    char fName[SIZE];
    unsigned int age; // For unsigned use the %du, %lu, %llu
    char lName[SIZE];
    printf("Please enter your first name:(< %d characters, No space) ", SIZE);
    //When using arrays, DO NOT include the '&' operator
    //in your scanf
    scanf("%s", fName);

    printf("Enger your age: ");
    scanf("%u", &age);
    printf("Please enter your last name:(< %d characters, No space) ", SIZE);
    printf("Hi [%s]", fName);
    scanf("%s", lName);
    printf("Hi [%s][%s] [%u] years old\n", fName, lName, age);

    return 0;
}
// Function Definitions


