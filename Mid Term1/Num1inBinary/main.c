/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Dell
 */


#include <stdio.h>

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}


int main()
{
    int i;
    scanf("%d", &i);
    printf("%d", countSetBits(i));
    return 0;
}
