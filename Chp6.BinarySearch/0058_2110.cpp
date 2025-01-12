// BOJ 2110
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> in;

int calcDist(int objDist)
{
	int pastX= in[0];
	int setup= 1;
	
	for(int i= 1; i< in.size(); i++)
	{
		if(in[i] - pastX >= objDist)
		{
			pastX= in[i];
			setup++;
		}
	}
	
	return setup;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, C, t;
	
	cin >> N >> C;
	for(int i= 0; i< N; i++)
	{
		cin >> t;
		in.push_back(t);
	}
	
	sort(in.begin(), in.end());
	
	int L, R, dist, ans= -1;
	L= 1;
	R= in.back() - in.front();
	
	while(L<= R)
	{
		dist= (L+R)/2;
		if(calcDist(dist)>= C)
		{
			L= dist + 1;
			ans= dist;
		}
		else
			R= dist - 1;
	}
	
	cout << ans << "\n";
	
	return 0;
}
*/
