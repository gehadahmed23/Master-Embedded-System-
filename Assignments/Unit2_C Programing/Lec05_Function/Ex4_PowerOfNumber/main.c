/*
 * main.c
 *
 *  Created on: Sep 5, 2024
 *      Author: Dell
 */


/*
 * main.c
 *
 *  Created on: Sep 4, 2024
 *      Author: Dell
 */

#include "stdio.h"
#include "math.h"
#include <stdbool.h>
#include "string.h"

int PowerOfNumber(int a, int b){
	if(b == 0){
		return 1;
	}
	return PowerOfNumber(a, b - 1) * a;
}
void main()
{
	int a, b;
	printf("Enter base number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &a);
	printf("Enter power number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &b);
	printf("%d ^ %d = %d", a, b, PowerOfNumber(a, b));
    return;
}
