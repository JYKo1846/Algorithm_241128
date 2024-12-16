/*
// BOJ 10814
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<pair<int, pair<string, int>>> join;

bool comp(pair<int, pair<string, int>> a, pair<int, pair<string, int>> b)
{
	if(a.second.second == b.second.second)
		return a.first < b.first;
	else
		return a.second.second < b.second.second;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		int age;
		string name;
		
		cin >> age >> name;
		pair<string, int> t= make_pair(name, age);
		pair<int, pair<string, int>> tt= make_pair(i, t);
		join.push_back(tt);
	}
	
	sort(join.begin(), join.end(), comp);
	
	for(i= 0; i< N; i++)
		cout << join[i].second.second << " " << join[i].second.first << "\n";
	
	return 0;
}*/
