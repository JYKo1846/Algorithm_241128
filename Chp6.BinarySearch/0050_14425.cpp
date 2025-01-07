// BOJ 14425
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

vector<string> in;

bool isExist(string t_str)
{
	int L, R, mid;
	L= 0;
	R= in.size()-1;
	while(L<= R)
	{
		mid= (L+ R)/ 2;
		if(t_str.compare(in[mid])< 0) R= mid- 1;
		else if(t_str.compare(in[mid])> 0) L= mid+ 1;
		else return true;
	}
	return false;
}


int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, L, R;
	int res= 0;
	string t;
	bool find;
	
	cin >> N >> M;
	
	for(int i= 0; i< N; i++)
	{
		cin >> t;
		in.push_back(t);
	}
	
	sort(in.begin(), in.end());
	
	for(int i= 0; i< M; i++)
	{
		cin >> t;
		*/ooooo
		/*
		L= 0, R= N- 1;
		find= false;
		
		while(L<= R)
		{
			int mid= (L+ R)/ 2;
			if(t.compare(in[mid])< 0) R= mid- 1;
			else if(t.compare(in[mid])> 0) L= mid+ 1;
			else
			{
				find= true;
				break;
			}
		}
		if(find) res++;
		*/
/*
		if(isExist(t)) res++;
	}

	cout << res << "\n";
	return 0;
}
*/
