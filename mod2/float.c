/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with float points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:42 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    float temp = 7.9;  //Celsius
    double ftemp = 0;
    // For floats use the %f placeholder
    // for doubles use the %lf placeholder
    printf("The temperature is %f Celsius\n", temp);
    printf("What is the temperature in Ogden now in Celsius:  \n");
    // use %f to capture float information
    // use %lf to capture double information
    scanf("%f", &temp);
    ftemp = (temp * 9/5) + 32;
    //Convert from Celsius to Farenheight
    printf("I see, your temp is %f in Farenheight.\n", ftemp);

    return 0;
}
// Function Definitions


