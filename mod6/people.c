/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  Analyze persons records
 *
 *        Version:  1.0
 *        Created:  02/12/2019 10:07:40 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o people.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>  // time()
// Constants 
#define PERSONS 5
#define ATTRI   3
#define AGE     0
#define WEIGHT  1
#define HEIGHT  2
// Function Prototypes

// Main Function
int main()
{

    //           [row][columns]
    double people[PERSONS][ATTRI];              /* 2D array */
    srand(time(0)); // set random seed
    for(int i =0; i< PERSONS; i++)              /* loop over Persons1D */
    {
        for(int j =0; j < ATTRI; j++)           /* loop over attributes2D */
        {
            if(j == AGE){
            people[i][j] = rand() % 50; // set age 0-50
            }
            else if(j == WEIGHT){
            people[i][j] = rand() % 200; // setweught 0-200 kg
            }
            else if(j == HEIGHT){
                people[i][j] = rand() % 200; // set HEIGHT 0-200 cm
            }
        }
    }
    // Now display the information

    for (int row =0 ;row < PERSONS; row++  )
    {
         printf("%d person information\n", row + 1);
        for (int col = 0; col < ATTRI ; col++ )
        {
            
            switch (col) {
                case AGE:
                       printf("Your age is %lf\n", people[row][col] );
                    break;
                case HEIGHT:
                    printf("Your height is %lf\n", people[row][col]);
                    break;
                case WEIGHT:
                    printf("Your weight is %lf\n", people[row][col]);

            }/* -----  end switch  ----- */
        } // end of col loop
        printf("Done with attributes\n");
    } // end of row loop
    printf("Done with persons\n");
    return 0;
}
// Function Definitions


