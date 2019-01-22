/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate altitude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:28 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 6.67e-11; //Newton's constant(m^3 kg^-1 s^-2)
const double E_MASS = 5.97e24;   // Earth mass in kg
const double E_RADIUS = 6.371e3;  //Earth's radius in meters
const double PI = 3.1415941;     // PI
// Function Prototypes

// Main Function
int main()
{   //1 Enter the period 
    double period = 0;
    double height =0;
    printf("Enter the period (T) in seconds: \n");
    scanf("%lf", &period);
    // Height = [(G M T^2)/(4PI^2)]^1/3 - R
//    height = GRAVITY * E_MASS * pow(period, 2); //get the numerator 
//    height = height/(4*pow(PI,2)); // denominator
//    height = pow(height,1.0/3);
//    height = cbrt(height);
    height = cbrt((GRAVITY * E_MASS * pow(period,2))/(4*pow(PI,2))) - E_RADIUS;

    //Display result
    printf("Your satallite after %lf sec is %lf km from earth\n",
            period, height/1000);
    return 0;
}
// Function Definitions


