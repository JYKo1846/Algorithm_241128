// BOJ 13422
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int in[100005];
	int T, N, M, ans, i;
	long long cur, K;
	
	cin >> T;
	while(T--)
	{
		memset(in, 0, 100005*sizeof(int));
		cur= 0;
		ans= 0;
		cin >> N >> M >> K;
		
		for(i= 0; i< N; i++) cin >> in[i];
		
		for(i= 0; i< M; i++) cur+= in[i];
		if(cur< K) ans++;
		
		if(N!= M)
		{
			for(i= 1; i< N; i++)
			{
				cur-= in[i-1];
				cur+= in[(i+M-1)%N];
				if(cur< K) ans++;
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}
*/
