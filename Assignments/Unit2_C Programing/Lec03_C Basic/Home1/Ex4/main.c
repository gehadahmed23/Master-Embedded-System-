/*
 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */

#include "stdio.h"

void main()
{
	float x, y;
	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f", &x, &y);
	printf("You entered: %f", x * y);
}
