/*
BOJ 1152
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in, tmp;
	int res= 1, idx= 0;
	
	getline(cin, in);
	
	if(in[0]== ' ')
		tmp= in.substr(1, in.length());
	else
		tmp= in;
		
	if(in[in.length()-1]== ' ')
		tmp= tmp.substr(0, tmp.length()-1);

	while(tmp.find(" ", idx)!= string::npos)
	{
		res++;
		idx= tmp.find(" ", idx)+1;
	}
	
	if(in.compare(" ")== 0) res= 0;
	cout << res << endl;
	
	return 0;
	
}
*/
