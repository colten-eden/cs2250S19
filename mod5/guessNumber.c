/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  Guess the randomm number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:00 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>   // time()
// Constants
#define MAX 5
#define LIMIT 100
// Main Function
int main()
{  
    int number, guess;
    srand(time(0)); // set the random SEED
    guess = rand() % LIMIT;  // set random number between 0-9:
    //Before c89 you need to define i outside loop int i;
    for(int i = 0; i < MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n", LIMIT - 1);
        printf("You have %d opportunities left\n", MAX - i);
        scanf("%d", &number);
        if(number > guess)
        {
            printf("Go lower\n");
        }
        else if(number < guess)
        {
            printf("Go higher\n");
        }
        else
        {
            printf("Congratulations, you got the correct number\n");
            return 0;
        }
    } // End of forLoop
    printf("Sorry, you did not guess the [%d] number\nPlay again\n",
           guess);




    return 0;
}
// Function Definitions


