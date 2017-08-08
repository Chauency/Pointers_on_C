/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: token.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-09
    > Description: 
 ************************************************************************/
#include <stdio.h>
#include <string.h>
void printTokens(char *line)
{
	char *token;
	char whitespace[] = " \t\f\r\v\n";
	for(token = strtok(line,whitespace); token != NULL; token = strtok(NULL, whitespace))
	{
		printf("Next token is %s\n",token);
	}
}
int main()
{
	char line[] = " 1 2 3 4";
	printTokens(line);
	return 0;
}
