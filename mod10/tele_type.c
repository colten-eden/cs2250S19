/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  First look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:15 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out -lm
 *          Usage:  ./tele_type.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants
#define MAXNAME 30
#define MAXPHONE 15
struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr;  // should be the last member of struct
};
typedef struct TeleType Tele;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, Junio","(801) 555-2874"};
    Tele t2 = {"Blach, Chino","(801) 891-2344"};
    Tele t3 = {"Jordan, Mike","(801) 678-2357"};
    Tele* first;  // pointer to structure

    first =  &t1;  // get the address of a Tele structure
    t1.nextaddr = &t2; // set the address of the next struct
    t2.nextaddr = &t3; // set the address of next struc
    t3.nextaddr = NULL; // last member
    printf("%s\n %s\n %s\n", first->name, t1.nextaddr->name,
            t2.nextaddr->name);
    return 0;
}
// Function Defenitions


