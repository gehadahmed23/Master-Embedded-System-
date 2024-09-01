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
	switch(c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'u':
	case 'o':
		printf("%c is a vowel", c);
		break;
	default:
		printf("%c is a consonant", c);
		break;
	}
}
