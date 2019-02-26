/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  Learn how to pass information to function by input
 *    parameter
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:35:29 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOrigPosition(const double* x,const double* y);
void UpdatePosition(double* x, double* y, double new_x, double new_y);
void ResetPosition(double* x, double* y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {
        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]); // convert the first input param to double
    y = atof(argv[2]); // convert second to param double
    DisplayOrigPosition(&x, &y); // takes two address of type double
    UpdatePosition(&x,&y, 2.0, 4.0);
    DisplayOrigPosition(&x, &y); // takes two address of type double
    ResetPosition(&x, &y); // Reset vales to origin
    DisplayOrigPosition(&x, &y); // takes two address of type double




    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPosition
 *  Description:  Display current point position
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Returns: nothing
 * =====================================================================================
 */
void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf, %4.2lf)\n", x,y);
//    printf("Your current position address it (%p, %p)\n",&x,&y);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Update current point position to a new position
 *  Param: x_new => x coordinate address 
 *  Param: y_new => y coordinate address
 *  Returns: nothing
 * =====================================================================================
 */
void UpdatePosition(double* x, double* y, double new_x, double new_y)
{
    printf("****Updating position****\n");
    *x = new_x; //Dereference the pointer to update the value
    *y = new_y;
    printf("****Done Updating Position****\n");
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DiplayOrigPosition
 *  Description:  Display current point position of actual values
 *  Param: x => x coordinate address
 *  Param: y => y coordinate address
 *  Returns nothing
 *
 * =====================================================================================
 */
void DisplayOrigPosition(const double* x,const double* y)
{
    printf("Your current position is (%4.2lf, %4.2lf) (orig)\n", *x, *y);
//    printf("Your current original address is (%p, %p) (orig)\n", x, y);
    // To display the values of pointers/address use the
    // dereference operatro "*". This only applies to pointers
    

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ResetPosition
 *  Description:  Reset the original values of x and y to zero.
 *  Param: x => x coordinate address
 *  Param: y => y coordinate address
 * =====================================================================================
 */
void ResetPosition(double* x, double* y)
{
    printf("****Reseting position****\n");
    *x = 0; // Dereference the pointer to update the value
    *y = 0;
    
    return;
}



