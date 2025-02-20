// BOJ 15831
// CODE #1. Two Pointer
/*
#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, B, W;
	char in[300005];
	
	cin >> N >> B >> W;
	
	for(int i= 0; i< N; i++) cin >> in[i];
	
	int nxt, ans= 0, curB, curW;
	
	nxt= 0;
	curB= curW= 0;
	for(int st= 0; st < N; st++)
	{
		while(nxt< N)
		{
			if(curB== B && in[nxt]== 'B') break;
			if(in[nxt++]== 'W') curW++;
			else curB++;
		}
		if(curW>= W)
			ans= ans > curW+ curB ? ans : curW+ curB;
		
		if(in[st]== 'W') curW--;
		else curB--;
	}
	
	cout << ans << "\n";
	
	return 0;
}
*/
