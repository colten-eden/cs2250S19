/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  Take month and day from user, then verify entries are valid.
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:17:00 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
// constants
#define JANUARY   1
#define FEBRUARY  2
#define MARCH     3
#define APRIL     4
#define MAY       5
#define JUNE      6
#define JULY      7
#define AUGUST    8
#define SEPTEMBER 9
#define OCTOBER   10
#define NOVEMBER  11
#define DECEMBER  12

// Main Function
int main()
{
    int month;
    int day;
    // 1) Capture user input
    printf("Enter a month: 1 for January, 2 for Feb., etc:\n");
    scanf("%d", &month);
    printf("\nEnter the day: ");
    scanf("%d", &day);
    // 2) Use IF to validate month
    if(month > 12 || month < 1)
    {
        printf("You have entered an invalid month\n");
    }
    // 3) Use switch to validate day of the month 
    switch(month)
    {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            if(day > 31 || day <1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            if(day > 30 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        case FEBRUARY: 
            if(day > 28 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
    }



    return 0;
}
// Function Definitions


