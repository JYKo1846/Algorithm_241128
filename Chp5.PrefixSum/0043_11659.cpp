// BOJ 11659
/*
#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, head, tail, i, res;
	int in[100005];
	int acc[100005];
	
	for(i= 0; i< 100005; i++) acc[i]= 0;
	
	cin >> N >> M;
	for(i= 1; i<= N; i++)
	{
		cin >> in[i];
		acc[i]= acc[i-1]+in[i];
	}
	
	while(M--)
	{
		cin >> head >> tail;
		cout << acc[tail]-acc[head-1] << "\n";
	}
	
	return 0;
}
*/
