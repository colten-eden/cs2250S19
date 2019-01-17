#include<stdio.h>

int main()
{
	int distance = 0;
	int time = 0;
	int velocity = 0;
	// 1) Ask for distance in meters
	printf("What is the distance in meters?\n");
	scanf("%d", &distance);
	// 2) Ask for time in seconds
	printf("What is the time in seconds?\n");
	scanf("%d", &time);
	// 3)Calculate the velocity in km/hr
	// 1 km = 1000 meters
	// 1 hr = 3600 seconds
	// TODO: Fix the coredum related to Floating point.
	velocity = (distance/1000)/(time/3600);
	printf("Velocity (integer) is %d km/hr\n", velocity);
	
	return 0;
}
