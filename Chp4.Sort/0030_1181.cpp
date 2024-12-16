/*
// BOJ 1181
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> in;
vector<string> res;

bool comp(const string &a, const string &b)
{
	if(a.size() == b.size())
		return a < b;
	else 
		return a.size() < b.size();
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j;
	
	cin >> N;
	
	for(i= 0; i< N; i++)
	{
		string tmp;
		cin >> tmp;
		
		in.push_back(tmp);
	}
	
	sort(in.begin(), in.end(), comp);
	
	res.push_back(in[0]);
	for(i= 1; i< N; i++)
	{
		if(in[i].compare(in[i-1])!= 0)
			res.push_back(in[i]);
	}
	
	for(i= 0; i< res.size(); i++)
		cout << res[i] << "\n";
	
	return 0;
}*/
