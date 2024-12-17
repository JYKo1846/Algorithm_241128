/*
// Using Map Datastructure & searching.
// BOJ 1302

#include <iostream>
#include <map>

using namespace std;

map<string, int> sell;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j, grt;
	string res;
	map<string, int> ::iterator iter;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		string name;
		cin >> name;
		if(sell.find(name)!= sell.end())
		{
			sell[name]++;
		}
		else
			sell.insert({name, 1});
	}
	
	grt= 0;
	for(iter= sell.begin(); iter!= sell.end(); iter++)
	{
		if(iter->second > grt)
		{
			grt= iter->second;
			res= iter->first;
		}
	}
	
	cout << res << "\n";
	return 0;
}
*/
