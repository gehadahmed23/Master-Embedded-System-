/*
 * main.c
 *
 *  Created on: Sep 4, 2024
 *      Author: Dell
 */


#include "stdio.h"
#include "math.h"
#include <stdbool.h>

int FactorialOfNumber(int a){
	if(a == 1 || a == 0){
		return 1;
	}
	return FactorialOfNumber(a - 1) * a;
}
void main()
{
	int a;
	printf("Enter an positive integer : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &a);
	printf("Factorial of number %d is : %d", a, FactorialOfNumber(a));


}
