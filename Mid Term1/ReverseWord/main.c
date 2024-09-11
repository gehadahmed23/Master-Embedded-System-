/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Dell
 */


#include "stdio.h"
#include "math.h"
#include <stdbool.h>
#include "string.h"

char c[100][100];
void RevirceSentence(char text[], int n, int i){
	if(i == n){
		return;
	}

	RevirceSentence(text, n, i + 1);
	printf("%c", text[i]);
}
void main()
{
	int a, b;
	char text[100];
	printf("Enter a sentence : ");
	fflush(stdout); fflush(stdin);
	gets(text);
	RevirceSentence(text, strlen(text), 0);
}
