// BOJ 2295

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> in;
vector<int> ab;

int isExist()
{
	int L, R;
	int res= -1, val;
	for(int i= 0; i< in.size(); i++)
	{
		for(int j= 0; j< in.size(); j++)
		{
			val= in[i]- in[j];
			if(val>= 0)
			{
				L= 0, R= ab.size() -1;
				while(L<= R)
				{
					int mid= (L+R)/2;
					if(val < ab[mid]) R= mid- 1;
					else if(val > ab[mid]) L= mid+ 1;
					else 
					{
						res= res > in[i] ? res : in[i];		
						break;
					}
				}
			} 
		}	
	}
	return res;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, res= 0;
	cin >> N;
	for(int i= 0; i< N; i++) 
	{
		int t;
		cin >> t;
		in.push_back(t);
	}
	
	for(int i= 0; i< N; i++)
		for(int j= i; j< N; j++)
			ab.push_back(in[i]+ in[j]);
	
	sort(ab.begin(), ab.end());
	
	cout << isExist() << "\n";
	
	return 0;
}
