/*
 * Ex2.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */


#include "stdio.h"

void main()
{
	int x;
	printf("Enter a integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &x);
	printf("You entered: %d", x);
}
