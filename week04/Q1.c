/*

Write a program that reads the distance (km) between two cities: A and B, the speed of a vehicle (km/h), and some travel time (hours). 
Starting from A to B, your program should calculate the status of the travel at given time. 
If the car can reach the destination (B) within the given time, the program should print: "The vehicle has arrived X hours ago" (X must be calculated). 

If the car can not reach the destination in the given time, the program will print either 
      "The journey continues, the car is closer to A" 
or
      "The journey continues, the car is closer to B" 
 according to the position of the car in the road.
*/

#include <stdio.h>

int main(void){

	int distance, speed, hours;
	scanf("%d%d%d", &distance, &speed, &hours);

	int travel = speed * hours;

	if (travel >= distance)
	{
	  float ttime = (distance*1.0 / speed);
	  printf("The vehicle arrived %.1f hours ago.", hours -ttime);
	}
	else
	{
		if( travel <= (distance - travel))
			printf("The journey continues, the car is closer to A" );
		else
			printf("The journey continues, the car is closer to B");
	}

	return 0;
}

