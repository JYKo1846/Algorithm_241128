// BOJ 6236
/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> in;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, X, max_v, cutVal, spentDay;
	max_v= -1;
	
	cin >> N >> M;
	
	for(int i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
		max_v= max_v > t ? max_v : t;
	}
	
	int L, R, remainVal;
	L= max_v;
	R= 1000000000;
	
	while(L<= R)
	{
		spentDay= 1;
		cutVal= (L+R)/2;
		remainVal= cutVal;
		for(int i= 0; i< in.size(); i++)
		{
			if(remainVal >= in[i]) remainVal -= in[i];
			else
			{
				spentDay++;
				remainVal= cutVal- in[i];
			}
		}
		if(spentDay > M) L= cutVal+ 1;
		else
		{
			R= cutVal -1;
			X= cutVal;
		}
	}
	
	cout << X << "\n";
	
	return 0;
}
*/
