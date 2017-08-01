/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: 4_2_prime.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-01
    > Description: 
 ************************************************************************/
#include<stdio.h>
int isPrime(int n);
int isPrime(int n)
{
	if ( n < 2) return 0;
	int i = n / 2;
	while( i > 1 )
	{
		if ( n % i == 0)
		{
			return 0;
		}
		i--;
	}
	return 1;
}
int main()
{
	int n = 2;
	if(isPrime(n))
	{
		printf("%d is a prime.\n", n);
	}
	else
	{
		printf("%d is not a prime.\n",n);
	}
	return 0;

}
