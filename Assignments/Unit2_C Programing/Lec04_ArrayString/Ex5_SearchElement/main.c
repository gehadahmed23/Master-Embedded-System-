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
	int a[100];
	printf("Enter the number of data : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be Searched: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &e);
	for(int i = n - 1; i >= 0; i--){
		if(a[i] == e){
			l = i + 1;
			break;
		}
	}
	printf("Enter the location : %d", l);


}
