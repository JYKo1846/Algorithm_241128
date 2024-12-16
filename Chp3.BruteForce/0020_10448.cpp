/*
BOJ 10448
#include <iostream>

using namespace std;

int in[47];
bool tri[1002];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int TC, i, j, k, a, t;
	
	for(i= 0; i< 1002; i++) tri[i]= 0;
	for(i= 1; i< 46; i++) in[i]= (i*(i+1))/2;
	
	
	// T1+ T2+ T3
	for(i= 1; i< 46; i++)
	{
		for(int j= i+1; j< 46; j++)
		{
			for(int k= j+1; k< 46; k++)
			{
				t= in[i]+ in[j]+ in[k];
				if(t<= 1000) tri[t]= 1;
			}
		}
	}
	
	// T1+ T1+ T2 & T1+ T1+ T1 & T1+ T2+ T2
	for(i= 1; i< 46; i++)
	{
		for(j= 1; j< 46; j++)
		{
			t= in[i]*2 + in[j];
			if(t<= 1000) tri[t]= 1;
		}
	}
	
	cin >> TC;
	
	while(TC-- > 0)
	{
		cin >> a;
		cout << tri[a] << "\n";
	}
	
	return 0;
}


#include <iostream>

using namespace std;

int in[45];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int TC, N, i, j, k, tN, ttN, tttN, res= 0;
	
	for(i= 0; i< 45; i++) in[i]= (i*(i+1))/2;
	for(i= 0; i< 45; i++) cout << in[i] << " ";
	cout << "\n";
	
	cin >> TC;
	
	while(TC-- > 0)
	{
		cin >> N;
		
		for(i= 1; i< 45; i++)
		{
			tN= N;
			tN-= in[i];
			for(j= 1; j< 45; j++)
			{
				ttN= tN;
				ttN-= in[j];
				for(k= 1; k< 45; k++)
				{
					tttN= ttN;
					tttN-= in[k];
					if(tttN== 0)
						res= 1;
				}
			}
		}
		
		cout << res << "\n";
	}
	
	return 0;
}
*/
