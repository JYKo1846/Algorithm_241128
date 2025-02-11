// BOJ 1806
/*
#include <iostream>

using namespace std;

int in[100005];
int N;
long long S;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int idxR;
	int N, S, i;
	int curSum;
	int ansLen= 100005;
	
	cin >> N >> S;
	for(i= 0; i< N; i++) cin >> in[i];
	
	idxR= 0;
	curSum= in[0];
	for(i= 0; i< N; i++)
	{
		while(curSum < S && idxR < N - 1)
			curSum+= in[++idxR];
		if(curSum >= S)
			ansLen = ansLen < idxR - i + 1 ? ansLen : idxR - i + 1;
		curSum-= in[i];
	}
	
	if(ansLen> N) ansLen= 0;
	cout << ansLen << "\n";
	return 0;
}
*/	
