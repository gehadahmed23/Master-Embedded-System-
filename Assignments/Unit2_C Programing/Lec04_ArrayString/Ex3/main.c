/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: Dell
 */

#include "stdio.h"

void main()
{
	int n, m;
	float a[100][100], t[100][100];
	printf("Enter row and col : ");
	fflush(stdout); fflush(stdin);
	scanf("%d%d", &n, &m);
	printf("Enter the element of Matrix:\n");
	fflush(stdout); fflush(stdin);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("Enter element %d%d: ", i + 1, j + 1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	fflush(stdout); fflush(stdin);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%.0f ", a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	fflush(stdout); fflush(stdin);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%.0f ", a[j][i]);
		}
		printf("\n");
	}
}
