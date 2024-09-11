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

void RevirceDigit(int a){
	if(a == 0){
		return;
	}
	printf("%d", (a % 10));
	RevirceDigit(a / 10);
}
void main()
{
	int a;
	scanf("%d", &a);
	RevirceDigit(a);
}
