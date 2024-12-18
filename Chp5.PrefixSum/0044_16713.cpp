// BOJ 16713
/*
#include <iostream>

using namespace std;

int in[1000005], acc[1000005];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, Q, i, j, hd, tl, res= 0;
	
	for(i= 0; i< 1000005; i++) acc[i]= 0;
	
	cin >> N >> Q;
	
	for(i= 1; i<= N; i++)
	{
		cin >> in[i];
		acc[i]= acc[i-1] ^ in[i];
	}
	
	while(Q--)
	{
		cin >> hd >> tl;
		res^= acc[tl] ^ acc[hd-1];
	}
	
	cout << res << "\n";
	
	return 0;
}
*/
