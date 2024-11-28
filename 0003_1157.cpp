/*
BOJ 1157 word study

#include <iostream>
#include <string>

using namespace std;

int res[30]= {0, };		// number of used alphabet. ex) use a twice : res[0] = 2

int main()
{
	int i, j, str_len, alptoASC;
	string str;
	
	getline(cin, str);
	str_len = str.length();
	
	for(i= 0; i< str_len; i++)
	{
		char x= str[i];
		if(x>= 'a')
			alptoASC= x- 'a';
		else
			alptoASC= x- 'A';
		res[alptoASC]++;
	}
	
	int maxN= 0;
	int resA= -1;
	bool same= false;			// same number of alphabet exist, same will TRUE
	for(i= 0; i< 26; i++)
	{
		if(res[i]> maxN)
		{
			resA= i;
			maxN= res[i];
			same= false;
		}
		else if(res[i] == maxN)
			same= true;
	}
	
	if(same) cout << "?" << endl;
	else cout << (char)(resA+'A') << endl;
	
	return 0;
}*/
