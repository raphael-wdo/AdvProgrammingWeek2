// Desc: Simple calculator to calculate the area of the circle
// Auth: Raphael Wong 1/08/2019

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h>

#define EXIT_STATUS 0;

double calculateArea(double radius);

int main() {

	double radius, area;

	//input
	printf("Please enter radius of circle: ");
	scanf("%lf", &radius);
	area = calculateArea(radius);

	printf("The area of the circle is %.3f\n", area);	
	return EXIT_STATUS;
}

double calculateArea(double radius) 
{
	return M_PI * pow(radius, 2);
}
