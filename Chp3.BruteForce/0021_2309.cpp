/*
BOJ 2309
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int in[10];
vector<int> ans;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int tot= 0, i, j;
	
	for(i= 0; i< 9; i++)
	{
		cin >> in[i];
		tot+= in[i];
	}
	
	for(i= 0; i< 9; i++)
	{
		for(j= 1; j< 9; j++)
		{
			if(tot - (in[i]+ in[j])== 100)
			{
				for(int k= 0; k< 9; k++)
					if(k!= i && k!= j)
						ans.push_back(in[k]);
					
				sort(ans.begin(), ans.end());
				for(int k= 0; k< 7; k++)
					cout << ans[k] << "\n";
					
				return 0;
			}
		}
	}
						
	
	return 0;
}
*/
