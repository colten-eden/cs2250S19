/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Float temp
 *
 *        Version:  1.0
 *        Created:  01/29/2019 08:44:29 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//const int CELSIUS = 0;
//const int FAHRENHEIT = 1;
#define CELSIUS 0
#define FAHRENHEIT 1
// Main Function
int main()
{
//    float temp = 7.9; //Celsius
    double in_temp, out_temp;
    int choice;
    //1)Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit:" );
    scanf("%d", &choice);
    //2) based on choice calucluate celsicus or farenheight 
    
    if(choice == CELSIUS)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp * 9.0/5) + 32;
        printf("Your temperature in Fahrenheit is : %lf\n", out_temp);
    }
    else if (choice == FAHRENHEIT)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %lf\n", out_temp);
    }
    else 
    {
        printf("Sorry, you did not entter 0 or 1\n Adios amigo\n");
    return 0;
    }
}
// Function Definitions


