/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: strlen.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-07
    > Description: 
 ************************************************************************/
#include<stdio.h>
#define MAX_LEN  100
int strLen(char str[])
{
	int len = 0;
	while(*str++ != '\0')
	{
		++len;
	}
	return len;
}
int main()
{
	char string[MAX_LEN];
	while(gets(string))
	{
		int len = strLen(string);
		printf("%d\n", len);
	}
	return 0;
}
