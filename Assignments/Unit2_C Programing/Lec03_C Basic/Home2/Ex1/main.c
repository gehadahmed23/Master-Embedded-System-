/*
 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */

#include "stdio.h"

void main()
{
	int x;
	printf("Enter a numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &x);
	(x % 2)?printf("%d is odd", x):printf("%d is even", x);
}

