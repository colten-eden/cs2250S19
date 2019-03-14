/*
 * =====================================================================================
 *
 *       Filename:  seats.h
 *
 *    Description:  Seats Library
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:08:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEATS__INC__
#define  SEATS__INC__
#include <stdbool.h>
#include <string.h>
typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

void SeatMakeEmpty(Seat* seat); // pass by reference(address)
bool SeatIsEmpty(Seat seat);    // pass by value
void SeatPrint(Seat seat);    
void SeatsMakeEmpty(Seat seats[], int numSeats);
void SeatsPrint(Seat seats[], int numSeats); 
char SeatsMenu();



#endif /* ----- #ifndef SEATS__INC__ ----- */

