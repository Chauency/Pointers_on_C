/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: FileOpen.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-23
    > Description: 
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *input;
	input = fopen( "readme.txt", "a" );
	if( input == NULL )
	{
		perror( "Can't open readme.txt" );
		exit( EXIT_FAILURE );
	}

	//How to close a file
	if( fclose( input ) != 0 )
	{
		perror ( "Can't close readme.txt" );
		exit( EXIT_FAILURE );
	}
	return 0;
}

