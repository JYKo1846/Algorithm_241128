/*
BOJ 10809
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;
	int res[27], i;
	
	getline(cin, in);
	for(i= 0; i< 26; i++) res[i]= -1;
	
	for(i= 0; i< in.length(); i++)
	{
		if(res[in[i]-'a']== -1)
			res[in[i]-'a']= i;
	}
	
	for(i= 0; i< 26; i++) cout << res[i] << " ";
	cout << endl;
	
	return 0;
}
*/
