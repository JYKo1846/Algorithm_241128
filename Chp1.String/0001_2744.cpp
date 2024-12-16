/*
BOJ 2744_Capitalization 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;
	string out= "";
	
	getline(cin, in);
	
	for(int i= 0; i< in.length(); i++)
	{
		if((int)in.at(i)< 91)
			out.push_back((char)((int)in.at(i)+ 32));
		else
			out.push_back((char)((int)in.at(i)- 32));
	}
	
	cout << out << endl;
	
	return 0;
}*/
