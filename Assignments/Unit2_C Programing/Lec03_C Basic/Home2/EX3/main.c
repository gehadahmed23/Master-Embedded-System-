/*
 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */

#include "stdio.h"

void main()
{
	float x, y, z;
	printf("Enter three numbers x, y, z: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f%f", &x, &y, &z);
	fflush(stdout); fflush(stdin);
    (x >= y && x >= z)?printf("Largest number = %f", x): (y >= x && y >= z)?printf("Largest number = %f", y):printf("Largest number = %f", z);
}
