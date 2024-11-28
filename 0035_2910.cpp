/*
// BOJ 2910
// Using Tuple DS

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

vector<tuple<long long, int, int>> in;

bool comp(tuple<long long, int, int> a, tuple<long long, int, int> b)
{
	if(get<1>(a) == get<1>(b))
		return get<2>(a) < get<2>(b);
	return get<1>(a) > get<1>(b);
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j;
	long long C, tmp;
	bool flg;
	
	cin >> N >> C;
	for(i= 0; i< N; i++)
	{
		flg= false;
		cin >> tmp;
		for(j= 0; j< in.size(); j++)
		{
			if(tmp == get<0>(in[j])) 
			{
				get<1>(in[j])++;
				flg= true;
				break;
			}
		}
		if(!flg)
		{
			in.push_back(make_tuple(tmp, 1, i));
		}
	}
	
	sort(in.begin(), in.end(), comp);
	
	for(i= 0; i< in.size(); i++)
	{
		for(j= 0; j< get<1>(in[i]); j++)
		{
			cout << get<0>(in[i]) << " ";
		}
	}
	
	return 0;
}
*/
