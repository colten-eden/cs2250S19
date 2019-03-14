/*
 * =====================================================================================
 *
 *       Filename:  use_seats.c
 *
 *    Description:  Test seats.c
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:20:53 AM
 *       Revision:  none
 *       Compiler:  gcc use_seats.c  seats.c -o use_seats.out -lm
 *          Usage:  ./use_seats.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "seats.h"
// Constants

// Function Prototypes

// Main Function
int main(void) 
{
    const int NUM_SEATS = 5;
    char userKey = '-';
    int  seatNum = 0;
    Seat allSeats[NUM_SEATS];
    Seat currSeat;
    // Initialize array//
    SeatsMakeEmpty(allSeats, NUM_SEATS);

    while (userKey != 'q') 
    {
        userKey = SeatsMenu();
        if (userKey == 'p')
        { // Print seats
            SeatsPrint(allSeats, NUM_SEATS);
            printf("\n");
        }
        else if (userKey == 'r') 
        { // Reserve seat
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);

            if (!SeatIsEmpty(allSeats[seatNum])) {
                printf("Seat not empty.\n\n");
            }
            else {
                printf("Enter first name: \n");
                scanf("%s", currSeat.firstName);
                printf("Enter last name: \n");
                scanf("%s", currSeat.lastName);
                printf("Enter amount paid: \n");
                scanf("%d", &currSeat.amountPaid);

                allSeats[seatNum] = currSeat;

                printf("Completed.\n\n");
            }
        }// end of reservation
        // FIXME: Add option to delete reservations
        else if(userKey == 'd')
        {
            SeatsPrint(allSeats, NUM_SEATS);
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);
            if(!SeatIsEmpty(allSeats[seatNum]))
            {
                SeatMakeEmpty(&allSeats[seatNum]);
            }
            else 
            {
                printf("Seat is empty. \n\n");
            }
        }

        else if (userKey == 'q') { // Quit
            printf("Quitting.\n");
        }
        else {
            printf("Invalid command.\n\n");
        }
    }

    return 0;
}
// Function Defenitions


