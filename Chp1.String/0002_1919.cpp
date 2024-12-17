/*
BOJ 1919 anagram
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string str_x;
string str_y;
bool res_x[1005]= {0, };
bool res_y[1005]= {0, };

int main()
{
	int res= 0;
	int i, j, x_len, y_len;
	char x, y;
	
	getline(cin, str_x);
	getline(cin, str_y);
	
	x_len = str_x.length();
	y_len = str_y.length();
	
	for(i= 0; i< x_len; i++)
	{
		x= str_x[i];
		for(j= 0; j< y_len; j++)
		{
			y= str_y[j];
			if(!res_y[j] && x== y)
			{
				res_x[i]= 1;
				res_y[j]= 1;
				break;
			}
		}
	}
	for(i= 0; i< x_len; i++)
		if(!res_x[i]) res++;
		
	for(j= 0; j< y_len; j++)
		if(!res_y[j]) res++;

	cout << res << endl;
	return 0;
}*/
