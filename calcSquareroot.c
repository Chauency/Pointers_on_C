/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: demo2.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-8-01
    > Description: 
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double calcSquareRoot(int n, int iter);
double calcSquareRoot(int n, int iter)
{
	if (n < 0)
	{
		puts("Negative intergers have not square root!");
		exit( EXIT_FAILURE );
	}
	double res = 1.0;
	while( iter-- )
	{
		res = (res + n / res) / 2;
	}
	return res;
}

int main()
{	
	int n = 5, iter = 10;
	double a = calcSquareRoot( n, iter );
	printf("The square root of %d is %g \n", n,a); 
	return 0;
}
