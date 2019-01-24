/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates based on:
 *                  radius and theta angle(degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:36:05 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c  -o cartesian.out -lm
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double  PI = 3.14159;

// Main Function
int main()
{   double radius, theta, x_pos, y_pos;
    //1)Capture user input for radius, angle, and theta (degrees)
    printf("Enter a radius: ");
    scanf("%lf", &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf", &theta);
    //2) Convert the angle to radians
    theta = (theta * PI/180.0);
    //3) Calculate your cartesian coordinates
    x_pos = radius*cos(theta);
    y_pos = radius*sin(theta);
    //4) print the results: format should be 2 decimal places for x and y
    //%.2lf use only 2 decimal places
    //%6.2lf use only 2 decimal places, 6 chars wide
    //%-6.2lf use only 2 decimal places, 6 chars wide, left justified
    printf("Your cartesian coordinates, x = [%06.2lf]\n", x_pos);
    printf("Your cartesian coordinates, y = [%06.2lf]\n", y_pos);
    return 0;
}
// Function Definitions


