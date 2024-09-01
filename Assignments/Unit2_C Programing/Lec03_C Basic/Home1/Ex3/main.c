/*
 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */

#include "stdio.h"

void main()
{
	int x, y;
	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d%d", &x, &y);
	printf("You entered: %d", x + y);
}
