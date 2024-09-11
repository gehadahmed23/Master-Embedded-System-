/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Dell
 */


#include <stdio.h>

unsigned int SumDigit(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n % 10;
        n /= 10;
    }
    return count;
}


int main()
{
    int i;
    scanf("%d", &i);
    printf("%d", SumDigit(i));
    return 0;
}
