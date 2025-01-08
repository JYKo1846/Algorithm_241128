// BOJ 2470
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
	
	int N, res= 2000000001;
	
	cin >> N;
	for(int i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
	}
	
	sort(in.begin(), in.end());

	int L, R, mid, resA, resB, sum;
	for(int i= 0; i< N -1; i++)
	{
		L= i +1;
		R= N -1;
		while(L<= R)
		{
			mid= (L+R)/2;
			sum= in[i]+ in[mid];
			if(sum< 0) L= mid +1;
			else if(sum > 0) R= mid -1;
			else 
            {
                res= sum;
                resA= in[i];
                resB= in[mid];
                break;
            }
			
			if(abs(sum) < abs(res))
			{
				res= sum;
				resA= in[i];
				resB= in[mid];
			}
		}
	}
	
	cout << resA << " " << resB;
	
	return 0;
}
*/
