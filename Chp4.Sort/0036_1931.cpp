/*
// BOJ 1931
// Greedy problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> conf; 		// vector<pair<start_time, finish_time>>

bool comp(pair<int, int> a, pair<int, int> b)
{
	if(a.second == b.second)
		return a.first< b.first;
	return a.second < b.second;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j, st, ft;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> st >> ft;
		conf.push_back(make_pair(st, ft));
	}
	
	sort(conf.begin(), conf.end(), comp);
	
	// Use greedy algorithm, select first item because it's most closest to answer items.
	// cur : current cursor at conf vectors.
	int res= 1, cur= 0;
	for(i= 1; i< N; i++)
	{
		if(conf[cur].second <= conf[i].first)
		{
			cur= i;
			res++;
		}
	}
	
	cout << res << "\n";
	return 0;
}
*/
