/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  Get the distance traveled by a ball when it is dropped
 *                 from a building. Initial Velocity = 0
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:03 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 9.8; //m/s^2
const double BUILDING = 500; //meters
// Function Prototypes

// Main Function
int main()
{   //Formula: s = 0.5 g t^2
    double time = 0;
    double distance =0;
    double fromGround = 0;
    //Take user input: time travelled
    printf("Enter the time travelled in seconds:\n");
    scanf("%lf", &time);
    distance = 0.5 * GRAVITY * pow(time, 2);
    //Display distance
    printf("After %lf seconds, your ball travelled %lf meters\n",
            time, distance);
    //Distance from the ground in meters
    fromGround = BUILDING - distance;
    printf("The ball is %lf meters from the ground\n", fromGround);
    
    return 0;
}
// Function Definitions


