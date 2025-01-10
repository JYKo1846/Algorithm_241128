// BOJ 2417
/*
#include <iostream>

using namespace std;


int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	unsigned long long Q, N, L, R, mid, ans;
	
	cin >> Q;
	
	L= 1;
	R= 1ULL << 32;
	
	ans= 0;
	if(Q!= 0)
	{
		while(L<= R)
		{
			mid= (L+R)/2;
			unsigned long long val= mid*mid;
			if(val < Q) L= mid+ 1;
			else
			{
				R= mid -1;
				ans= mid;
			}
		}
	}
	cout << ans << "\n";
	
	return 0;
}
*/	
