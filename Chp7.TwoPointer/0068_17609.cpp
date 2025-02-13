// BOJ 17609
/*
#include <iostream>
#include <string>

using namespace std;

bool isPalin(string in, int L, int R)
{
	while(L<= R)
	{
		if(in[L]!= in[R]) return false;
		L++;
		R--;
	}
	return true;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int T;
	string in;
	
	cin >> T;
	while(T--)
	{
		cin >> in;
		int L= 0, R= in.size() -1;
		int ans= 0;
		
		while(L<= R)
		{
			if(in[L]!= in[R])
			{
				if(isPalin(in, L+1, R) || isPalin(in, L, R-1)) ans= 1;
				else ans= 2;
				break;
			}
			L++;
			R--;
		}
		
		cout << ans << "\n";
	}

	return 0;
}
*/
