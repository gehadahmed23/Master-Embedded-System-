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
	for(int i = 0; i < strlen(text); i++){
		frq[text[i]]++;
	}
	printf("Enter Character to find frequency: ");
	fflush(stdout); fflush(stdin);
	scanf("%c", &c);
	printf("Frequency of %c = %d", c, frq[c]);


}
