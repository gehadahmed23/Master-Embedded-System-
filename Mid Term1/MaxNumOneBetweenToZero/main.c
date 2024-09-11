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

int ans = 0;

void MaxOnes(int a){
	int mx = 0, l = 1, cnt = 0;
	while(a > 0){
		if((a & 1) == 0){
			l = 0;
		}

		if(l == 0 && ((a & 1) == 1)){
			mx++;
		}
		else if(l == 0 && ((a & 1) == 0)){
			if(ans < mx)ans = mx;
			mx = 0;
		}
		a >>= 1;
		cnt++;
	}
	if(ans < mx)ans = mx;
	fflush(stdout); fflush(stdin);
	printf("%d", ans);
}
void main()
{
	int a;
	scanf("%d", &a);
	MaxOnes(a);

}
