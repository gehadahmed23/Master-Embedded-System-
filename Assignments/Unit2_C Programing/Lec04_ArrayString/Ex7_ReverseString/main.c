/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: Dell
 */


#include "stdio.h"
#include "string.h"

void main()
{
	int frq[200] = {0};
	char text[100], c;
	printf("Enter a string : ");
	fflush(stdout); fflush(stdin);
	gets(text);
	printf("Reverse Of String : ");
	for(int i = strlen(text) - 1; i >= 0; i--){
		printf("%c", text[i]);
	}
}
