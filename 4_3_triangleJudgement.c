/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: 4_3_triangleJudgement.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-01
    > Description: algorithm of triangle judgement 
 ************************************************************************/
#include<stdio.h>
void swap(int *i, int *j);
void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
int main()
{
	int a, b, c, temp;
	while (scanf("%d%d%d", &a,&b,&c))
	{
		if ( a < b )
		{
			swap( &a, &b);
		}
		if ( a < c )
		{
			swap( &a, &c);
		}
		if ( b < c)
		{
			swap( &b, &c);
		}
		if ( a >= b + c )
		{
			puts("This is not a triangle!\n");
		}
		else if(a == b && b==c)
		{
			puts("This is an equilateral triangle!\n");
		}
		else if(a == b || b==c)
		{
			puts("This is an isosceles triangle!\n");
		}
		else 
		{
			puts("This is a normal triangle!\n");
		}

	}
	return 0;
}

