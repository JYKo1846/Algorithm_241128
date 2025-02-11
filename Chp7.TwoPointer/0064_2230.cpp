// BOJ 2230
//#1. Use Two pointer
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> in;
int N, M;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int idxR;
	int tmpAns;
	
	cin >> N >> M;
	for(int i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
	}
	
	sort(in.begin(), in.end());
	
	idxR= 0;
	int ans= in[N-1] - in[0];
	for(int i= 0; i< N; i++)
	{
		while(in[idxR] - in[i] < M && idxR < N - 1)
			idxR++;
		tmpAns= in[idxR] - in[i];
		if(tmpAns >= M)
			ans= ans < tmpAns ? ans : tmpAns;
	}
	
	cout << ans << "\n";
	
	return 0;
}
*/
//#2. Binary search
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> in;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, i;
	int ans= 2000000005;
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
	}
	
	sort(in.begin(), in.end());
	
	int L, R, mid;
	int tmpAns;
	
	for(i= 0; i< N; i++)
	{
		L= i; R= N-1;
		while(L<=R)
		{
			mid= (L+R)/2;
			tmpAns= in[mid]- in[i];
			if(tmpAns < M)
				L= mid + 1;
			else
			{
				R= mid - 1;
				ans= ans < tmpAns ? ans : tmpAns;
			}
		}
	}
	cout << ans << "\n";
		
	return 0;
}
*/
