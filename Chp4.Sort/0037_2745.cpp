// BOJ 2745
/*
#include <iostream>
#include <string>

using namespace std;

int trans(string in, int i, int form)
{
	int mult= 1, quo;
	int t= in.size() - (i + 1);
	char idx= in[i];
	
	while(t--> 0) mult*= form;
	
	if('A'<= idx && idx<= 'Z') quo= int(idx-'A') + 10;
	else quo= int(idx-'0');
	
	return quo* mult;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	string in;
	int res= 0, form;
	
	cin >> in >> form;
	
	for(int i= 0; i< in.size(); i++)
	{
		res+= trans(in, i, form);
	}
	
	cout << res << "\n";
	
	return 0;
}
*/
