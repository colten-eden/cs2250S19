/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI with floating points (IEEE-754).
 *                  single and double precision.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:31 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 -lm
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
int main()
{
    //BMI = weight/height**2
    //1) Capture user input: weight (kg) and height (meters)
    double weight = 5.0;
    double height = 1.0;
    double  bmi = 4.0;
    printf("Please enter your weight in kg: \n");
    scanf("%lf", &weight);

    printf("Enter your height in meters: \n");
    scanf("%lf", &height);
    //2) Calculate BMI
    bmi = weight/ pow(height, 2);
    //3)Display BMI
    printf("With %lf kg and %lf meters, your BMI is %lf\n",weight, height,  bmi);
    printf("Done\n");

    return 0;
}
// Function Definitions


