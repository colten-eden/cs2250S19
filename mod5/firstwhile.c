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
#define MINCOUNT 2
#define MAXCOUNT 5
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    // Task 2: Validate user input for 0 to 100 only 
    // Task 3: Ask user how many values they need to enter
    int count =0;
    float grade, avg;
    float total = 0;
    int student_count = 0;

    printf("How many hw values you want to enter(between %d and %d "
            ,MINCOUNT, MAXCOUNT);
    scanf("%d", &student_count);
    while(count < MAXCOUNT)
    {
        printf("\nEnter %d hw grade(0-100): ", count);
        scanf("%f", &grade);
        if(grade  < 0 || grade  > 100)
        {
            printf("Invalid input. Please try again\n");
            continue;   // invalid input
        }
        total += grade; // add up grades
        
        count++;        // update test condition: sentinal 
        if(count == student_count)
        {
            break;      // reach the student_count
        }
    }
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    printf("Bye amigo\n");


    return 0;
}
// Function Definitions


