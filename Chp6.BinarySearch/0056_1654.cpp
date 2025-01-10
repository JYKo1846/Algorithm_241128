// BOJ 1654
/*
#include <iostream>
#include <vector>

using namespace std;

vector<long long> in;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	long long K, N, toCut, max_l, X;
	max_l= -1;
	
	cin >> K >> N;
	for(int i= 0; i< K; i++)
	{
		long long t;
		cin >> t;
		in.push_back(t);
		max_l= max_l > t ? max_l : t;
	}
	
	long long L, R, tot;
	L= 1;		
	R= max_l;
	
	while(L<= R)
	{
		tot= 0;
		toCut= (L+R)/2;
		if(toCut== 0) tot= K;
		else
			for(int i= 0; i< in.size(); i++)	tot+= (in[i]/toCut);
		if(tot >= N)
		{
			L= toCut +1;
			X= toCut;
		}
		else
			R= toCut -1;
	}
	
	cout << X << "\n";
}
*/
