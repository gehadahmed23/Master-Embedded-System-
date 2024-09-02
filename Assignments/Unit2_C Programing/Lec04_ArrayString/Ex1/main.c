/*
 * main.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Dell
 */


#include "stdio.h"

void main()
{
	float M1[2][2], M2[2][2];
	printf("Enter the element of M1\n");
	fflush(stdout); fflush(stdin);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter M1%d%d: ", i, j);
			fflush(stdout); fflush(stdin);
			scanf("%f", &M1[i][j]);
		}
	}
	printf("Enter the element of M2\n");
	fflush(stdout); fflush(stdin);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Enter M2%d%d: ", i, j);
			fflush(stdout); fflush(stdin);
			scanf("%f", &M2[i][j]);
			M1[i][j] += M2[i][j];
		}
	}
	printf("Sum of Matrix: \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%.1f ", M1[i][j]);
		}
		printf("\n");
	}
}
