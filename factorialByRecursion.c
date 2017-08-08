/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: factorialByRecursion.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-08
    > Description: 
************************************************************************/
long factorial(int n)
{
	int result = 1;
	if(n <=0)
		return 1;
	else
		return n * factorial(n-1);
}
#include<stdio.h>

int main()
{
	int n = 10,result = 0;
	result = factorial(n);
	printf("%d\n",result);
    return 0;
}
