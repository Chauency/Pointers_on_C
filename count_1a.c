/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: count_1a.c
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-12
    > Description: 
 ************************************************************************/
int count_1a(unsigned value)
{
	int ones;
	for(ones = 0; value != 0; value >>= 1)
		if(value % 2 != 0)
			++ones;
	return ones;
}
