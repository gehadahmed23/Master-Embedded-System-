/*
 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Dell
 */

#include "stdio.h"

void main()
{
	char c;
	printf("Enter a Char: ");
	fflush(stdout); fflush(stdin);
	scanf("%c", &c);
	printf("ASCII value of %c = %d", c, c);
}

