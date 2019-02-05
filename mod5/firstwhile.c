/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  Learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:51 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhilec -o firstwhile.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    int count =0;
    float grade, avg;
    float total = 0; 
    
    while(count < MAXCOUNT)
    {
        printf("\nEnter %d hw grade(0-100): ", count);
        scanf("%f", &grade);
        total += grade; // add up grades
        
        count++;        // update test condition: sentinal 
    }
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    printf("Bye amigo\n");


    return 0;
}
// Function Definitions


