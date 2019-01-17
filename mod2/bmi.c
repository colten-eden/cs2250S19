/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:31 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi.
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
    //BMI = weight/height**2
    //1) Capture user input: weight (kg) and height (meters)
    int weight = 0;
    int height = 0;
    int bmi = 0;
    printf("Please enter your weight in kg: \n");
    scanf("%d", &weight);

    printf("Enter your height in meters: \n");
    scanf("%d", &height);
    //2) Calculate BMI
    bmi = weight/ (height * height);
    //3)Display BMI
    printf("With %d kg and %d meters, your BMI is %d\n",weight, height,  bmi);
    printf("Done\n");

    return 0;
}
// Function Definitions


