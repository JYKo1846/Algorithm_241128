// BOJ 1233
/*
#include <iostream>

using namespace std;

int sum[85];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int one, two, thr;
	int i;
	
	for(i= 0; i< 85; i++) sum[i]= 0;
	
	cin >> one >> two >> thr;
	
	for(i= 1; i<= one; i++)
	{
		for(int j= 1; j<= two; j++)
		{
			for(int k= 1; k<= thr; k++)
			{
				int t= i+j+k;
				sum[t]++;
			}
		}
	}
	
	int grt= -1, res= 0;
	for(i= 0; i< 81; i++)
	{
		if(sum[i]> grt)
		{
			res= i;
			grt= sum[i];
		}
	}
	
	cout << res;
	
	return 0;
}
*/
