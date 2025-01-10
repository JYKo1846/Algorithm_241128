// BOJ 2805

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> in;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, max_t, H;
	
	max_t= -1;
	
	cin >> N >> M;
	for(int i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		max_t= max_t > t ? max_t : t;
		in.push_back(t);
	}
	
	sort(in.begin(), in.end());
	
	int L, R, toCut;
	long long tot;
	
	L= 0;
	R= max_t;
	
	while(L<= R)
	{
		tot= 0;
		toCut= (L+R)/2;
		for(int i= 0; i< in.size(); i++) 
			if(in[i] > toCut) tot+= (in[i]- toCut);
		if(tot>= M)
		{
			L= toCut +1;
			H= toCut;
		}
		else
			R= toCut -1;
	}
	
	cout << H << "\n";
	
	return 0;
}
