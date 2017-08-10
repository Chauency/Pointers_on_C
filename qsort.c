/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: qsort.c
    > Author: Chauency
    > Mail:  
    > Created Time: 2017-08-10
    > Description: 
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char key[10];
	int otherData;
}record;
int compare(void const *a, void const *b)
{
	return strcmp( ((record *)a) -> key, ((record *)b) -> key);
}
int main()
{
	record array[50];
	qsort( array, 50, sizeof(record), compare);
	return 0;
}
