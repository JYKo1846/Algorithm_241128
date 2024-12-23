//BOJ 19951
/*
#include <iostream>

using namespace std;

int in[100005];
int delta[100005];
int accDelta[100005];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, i, j, hd, tl, hgt;
	
	cin >> N >> M;
	for(i= 1; i<= N; i++) cin >> in[i];
	
	for(i= 1; i<= N+1; i++)
	{
		delta[i]= 0;
		accDelta[i]= 0;
	}
	
	for(i= 0; i< M; i++)
	{
		cin >> hd >> tl >> hgt;
		delta[hd]+= hgt;
		delta[tl+1]-= hgt;
	}
	
	for(i= 1; i<= N; i++)
		accDelta[i]= accDelta[i-1]+ delta[i];
	
	for(i= 1; i<= N; i++)
		cout << in[i]+ accDelta[i] << " ";
	cout << "\n";
	
	return 0;
}
*/
