/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: Dell
 */


#include "stdio.h"

void main()
{
	int n, l, e;
	float a[100];
	printf("Enter the number of data : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Enter Number %d: ", i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f", &a[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &e);
	printf("Enter the location : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &l);
	for(int i = n - 1; i >= 0; i--){
		a[i + 1] = a[i];
		if(i == l){
			a[i] = e;
			break;
		}
	}
	for(int i = 0; i < n + 1; i++){
		printf("%.0f ", a[i]);
	}


}
