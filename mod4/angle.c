/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on the input angle
 *                  Quadrant I: angle between zero and 90
 *                  Quadrant II: angle between 90-180
 *                  Quadrant III: angle between 180-270
 *                  Quadrant IV: angle between 270-360
 *                  If angle is 0, then print positive x-axis
 *                  If angle is 90 then print positive y-axis
 *                  If anlge is 180 the print negativs x-axis
 *                  If angle is 270 then print negative y-axis
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:05 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Colten Eden (), colteneden@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Constants

// Main Function
int main()
{
    int angle;
    printf("Please enter an angle: \n");
    scanf("%d", &angle);
    angle = angle % 360;
    if(angle < 0)
    {
        angle = abs(360 + angle);
    }

        
    if(angle > 0 && angle <90)
    {
        printf("Your angle is in Quadrant 1");
    }
    else if(angle > 90 && angle < 180)
    {
        printf("Your angle is in Quadrant 2");
    }
    else if(angle > 180 && angle < 270)
    {
        printf("Your angle is in Quadrant 3");
    }
    else if(angle > 270 && angle < 360)
    {
        printf("Your angle is in Quadrant 4");
    }
    else if(angle > 360)
    {
        printf("Incorrect angle!");
    }
    else if(angle == 0 || angle == 90 || angle == 180 || angle || 270)
    {
        switch(angle)
        {
            case 0:
                printf("The angle is on the positive x axis\n");
               break;
            case 90:
                printf("The angle is on the positive y axis\n");
               break;
            case 180:
                printf("The angle is on the negative x axis\n");
               break;
            case 270:
               printf("The angle is on the negative y axis\n");
               break;
        }
    }
    return 0;
}
// Function Definitions


