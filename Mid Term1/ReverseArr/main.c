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

void RevirceSentence(int a[], int n, int i){
	if(i == n){
		return;
	}
	RevirceSentence(a, n, i + 1);
	printf("%d ", a[i]);
}
void main()
{
	int a[5] = {1, 2, 3, 4, 5};
	RevirceSentence(a, 5, 0);
}
