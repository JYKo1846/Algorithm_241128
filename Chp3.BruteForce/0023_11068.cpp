/*
BOJ 11068

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> str;
vector<int> rev_str;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int TC, in, tIn, i, j;
	
	cin >> TC;
	while(TC-- > 0)
	{
		bool recur= false;
		
		cin >> in;
		
		
		for(i= 1; i<= 64; i++)
		{
			int size;
			recur= true;
			
			tIn= in;
			str.clear();
			rev_str.clear();
			
			while(tIn > i)
			{
				str.push_back(tIn% i);
				tIn/= i;
			}
			if(tIn== i)
			{
				str.push_back(0);
				str.push_back(1);
			}
			else
				str.push_back(tIn);
			
			size = str.size();
			rev_str.resize(str.size());
			copy(str.begin(), str.end(), rev_str.begin());
			reverse(rev_str.begin(), rev_str.end());
			
			for(j= 0; j< size; j++)
				cout << str[j] << " ";
			cout << "\n";
			
			for(j= 0; j< size; j++)
				cout << rev_str[j] << " ";
			cout << "\n";
			
			
			for(j= 0; j< size; j++)
			{
				if(str[j]!= rev_str[j])
				{
					recur= false;
					break;
				}
			}
			if(recur)
			{
				cout << "1\n";
				break;
			}
		}
		if(!recur) cout << "0\n";
	}
	
	return 0;
}
*/
