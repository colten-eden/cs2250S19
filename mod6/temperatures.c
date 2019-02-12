/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:00 AM
 *       Revision:  none
 *       Compiler:  gcc temperatures.c -o temperatures.out
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h> //time()
#include <stdlib.h> // rand() srand()
// Constants
#define NUM 4 // number of days
#define MIN 20 // min temp
#define MAX 45 // max temp
// Function Prototypes

// Main Function
int main()
{
    double max_ogden[NUM];
    double min_ogden[NUM];
    double avg = 0, min_temp = 0, max_temp = 0;
    srand(time(0));               //set random seed
    //Task: Capture max and min temps from user
    printf("Simulating the max and min Ogden temp for the next %d days\n", NUM);
    for(int i  = 0; i < NUM; i++)
    {
        min_ogden[i] = ((rand() % MIN) + (rand() % MAX))/2;
        max_ogden[i] = min_ogden[i] + (rand() % (MAX - MIN));
    }
    //Task: Display information
    for(int i = 0; i < NUM; i++)
    {
    printf("%2d max%6.2lf min%6.2lf temp in Ogden\n",
            i+1, max_ogden[i], min_ogden[i]);
    }
    // Task: Calculate the average min and max of the date range
    // Initialize min temp and max temp
    min_temp = min_ogden[0];
    max_temp = max_ogden[0];
    for(int i =0; i < NUM; i++)
    {
        avg += min_ogden[i]; // adding elecments 
        avg += max_ogden[i];
       if(min_temp > min_ogden[i]) // select min values
       {
           min_temp = min_ogden[i];
       }
       if(max_temp < max_ogden[i]) // select max values
       {
           max_temp = max_ogden[i];
       }
    }
    avg = avg/(NUM * 2);
    printf("Your avg temp = %6.2lf\n", avg);
    printf("Your min %6.2lf and max %6.2lf\n", min_temp, max_temp);

    return 0;
    }
// Function Definitions


