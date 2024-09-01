/*
 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */


#include "stdio.h"

void main()
{
	float x;
	printf("Enter a numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &x);
	(x > 0)?printf("%f is Positive", x):(x < 0)?printf("%f is negative", x):printf("you entered zero");
}
