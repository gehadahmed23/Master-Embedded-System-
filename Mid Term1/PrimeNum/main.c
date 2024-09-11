/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Dell
 */

#include "stdio.h"
#include "math.h"
#include <stdbool.h>

void PrimeNumbers(int a, int b){
	if(a > b){
		a = a + b;
		b = a - b;
		a = a - b;
	}
	for(int i = a; i <= b; i++){
		bool prime = 1;
		for(int j = 2; j <= i / j; j++){
			if(i % j == 0){
				prime = 0;
			}
		}
		if(prime)printf("%d ", i);
	}
}
void main()
{
	int a, b;
	fflush(stdout); fflush(stdin);
	scanf("%d%d", &a, &b);
	PrimeNumbers(a, b);

}
