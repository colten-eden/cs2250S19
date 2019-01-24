/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:16 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out 
     ///* data */
 };
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 
#include <stdio.h>
#include <string.h>    //string manipulation operations

// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];
    printf("Please enter your first and last name: \n");
    scanf("%s %s", first, last);
    printf("Hi [%s] [%s]\n", first, last);
    strcpy(fullName, first);//fullName = first
    strcat(fullName, " "); //fullName = first + " "
    strcat(fullName, last); 
    printf("Your full name is [%s]\n", fullName);

    return 0;
}
// Function Definitions


