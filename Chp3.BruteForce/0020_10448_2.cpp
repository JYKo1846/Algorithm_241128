/*
BOJ 10448
#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int in[46];
	bool tri[1005];
	
	int TC, tN, ttN, tttN, ans, i, j, k;
	
	for(i= 0; i< 46; i++) in[i]= (i*(i+1))/2;
	for(i= 0; i< 1005; i++) tri[i]= false;
	
	for(i= 1; i< 46; i++)
	{
		tN= in[i];
		for(j= 1; j< 46; j++)
		{
			ttN= tN+ in[j];
			for(k= 1; k< 46; k++)
			{
				tttN= ttN+ in[k];
				if(tttN<= 1000)
					tri[tttN]= true;
			}
		}
	}
	
	cin >> TC;
	
	while(TC-- > 0)
	{
		cin >> ans;
		cout << tri[ans] << "\n";
	}
	
	return 0;
}
*/
