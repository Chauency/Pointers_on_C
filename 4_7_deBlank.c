/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: 4_7_deBlank.c
    > Author: Chauency
    > Mail:  
    > Created Time: 2017-08-06
    > Description: 
 ************************************************************************/
#include<stdio.h>
void deblank(char string[])
{
	int index1 = 0, index2 = 0;
	for(int i = 0; string[i] != '\0'; ++i)
	{
		if(string[i] != ' ')
		{
			index1 = i;
			continue;
		}
		else
		{
			index1 = index1 < i ? index1 : i;//keep the index of the first blank
			if (i == 0) --index1;
			string[++index1] = ' ';
			while(string[i] == ' ')
			{
				++i;
			}
			while(string[i] != ' ')
			{
				string[++index1] = string[i];
				if(string[i] == '\0')
				{
					break;
				}
				++i;
			}
		}
	}
}
int main()
{
	char *string;
	while(gets(string))
	{
		deblank(string);
		puts(string);
	}
	return 0;
}

