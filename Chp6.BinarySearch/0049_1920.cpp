//BOJ 1920
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
	
	int N, M, L, R, mid, i, j, input;
	bool find;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> input;
		in.push_back(input);
	}
	
	sort(in.begin(), in.end());
	
	cin >> M;
	for(i= 0; i< M; i++)
	{
		cin >> input;
		
		L= 0, R= N-1;
		find= false;
		while(L<= R)
		{
			mid= (L+R)/2;
			if(input < in[mid]) R= mid- 1;
			else if(in[mid] < input) L= mid+ 1;
			else 
			{
				find= true;
				break;
			}
		}
		if(find) cout << "1\n";
		else cout << "0\n";
	}	
	
	return 0;
}
*/
