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
#include <stdbool.h>
// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 3
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    // Task 2: Validate user input for 0 to 100 only 
    // Task 3: Ask user how many values they need to enter
    // Task 4: If user enters a number below MINCOUNT set it MINCOUNT
    // and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    // Task 5: Support multiple student entries. Calculate class avg
    // Task 6: Display student letter grade

    int grade_count = 0;
    float grade, avg;
    float total = 0;
    int hw_count = 0;
    int student_count = 1;
    float class_avg = 0;

    while(student_count <= MAXSTUDENTS)  // loop over students
    {
        printf("Processing %d student grades\n", student_count);
        printf("How many hw values you want to enter(between %d and %d "
                ,MINCOUNT, MAXCOUNT);
        scanf("%d", &hw_count);
        if(hw_count < MINCOUNT)
        {
            printf("%d is lower than %d. Setting your entry to %d\n",
                    hw_count, MINCOUNT, MINCOUNT);
            hw_count = MINCOUNT;
        }
        if(hw_count > MAXCOUNT)
        {
            printf("%d is greater than %d. Setting your entry to %d\n",
                    hw_count, MAXCOUNT, MAXCOUNT);
            hw_count = MAXCOUNT;
        }


        while(grade_count < MAXCOUNT)
        {
            printf("\nEnter %d hw grade(0-100): ", grade_count);
            scanf("%f", &grade);
            if(grade  < 0 || grade  > 100)
            {
                printf("Invalid input. Please try again\n");
                continue;   // invalid input
            }
            total += grade; // add up grades

            grade_count++;        // update test condition: sentinal 
            if(grade_count == hw_count)
            {
                break;      // reach the hw_count
            }
        } // end of one student loop
        avg = total/hw_count;
        class_avg += avg; // get class avg
        printf("Your avg is [%6.2f]\n", avg);
        //reset values
        grade_count = 0;
        total = 0;
        student_count++;
    }  // end of students loop
    printf("The class average is %f\n", class_avg/MAXSTUDENTS);
    printf("Bye amigo\n");


    return 0;
}
// Function Definitions


