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
	printf("Enter a number x: ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &x);
	printf("Enter a number y: ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &y);
	x += y;
	y = x - y;
	x -= y;
	printf("After swapping, value of x = %.2f\nAfter swapping, value of y = %.2f", x, y);
}
