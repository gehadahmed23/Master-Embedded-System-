/*
 * main.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Dell
 */


#include "stdio.h"

void main()
{
	int n, sum = 0;
	float a[100];
	printf("Enter the number of data : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Enter Number: ");
		fflush(stdout); fflush(stdin);
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("Average = %f", ((float)sum) / n);
}
