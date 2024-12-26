// BOJ 14476
//Code1. Time Over. Count Every integer's GCD numbers 
/*
#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int in[1000005];
map<int, int> root;

int main()
{
	cin.tie();
	ios_base::sync_with_stdio(false);
	
	int N, i, j, k, GCD= -1, excN, sqrtN;
	
	cin >> N;
	for(i= 0; i< N; i++) cin >> in[i];
	
	// Setting GCD PrefixSum
	for(i= 0; i< N; i++)
	{
		sqrtN= sqrt(in[i]);
		for(j= 1; j<= sqrtN; j++)
		{
			if(in[i]% j== 0)
			{
				auto iter= root.find(j);
				if(iter!= root.end())
					iter->second++;
				else
					root.insert({j, 1});
				
				iter= root.find(in[i]/j);
				if(iter!= root.end())
					iter->second++;
				else
					root.insert({in[i]/j, 1});
			}
		}
	}
	
	// Search GCD with except in[i]
	for(i= 0; i< N; i++)
	{
		sqrtN= sqrt(in[i]);
		for(j= 1; j<= sqrtN; j++)
		{
			if(in[i]% j== 0)
			{
				auto iter= root.find(j);
				iter->second--;
				iter= root.find(in[i]/j);
				iter->second--;
			}
		}
		
		for(auto iter= root.begin(); iter!= root.end(); iter++)
		{
			if(iter->second== N-1 && (in[i]% iter->first != 0))
			{
				GCD= iter->first;
				excN= in[i];
			}
		}
		sqrtN= sqrt(in[i]);
		for(j= 1; j<= sqrtN; j++)
		{
			if(in[i]% j== 0)
			{
				auto iter= root.find(j);
				iter->second++;
				iter= root.find(in[i]/j);
				iter->second++;
			}
		}
	}
	
	if(GCD== -1) cout << "-1\n";
	else cout << GCD << " " << excN << "\n";
	
	return 0;
}
*/
/*
//Code2. lgcd & rgcd 

#define LEN 1000005
#include <iostream>

using namespace std;

int in[];
int LGCD[47777];
int RGCD[47777];

int gcd(int a, int b)
{
	while(b!= 0)
	{
		int r= a% b;
		a= b;
		b= r;
	}
	return a;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, K, i, j, ans= -1, excN;
	
	for(i= 0; i<= LEN; i++) 
	{
		LGCD[i]= 0;
		RGCD[i]= 0;
	}
	
	cin >> N;
	for(i= 1; i<= N; i++) cin >> in[i];
	
	for(i= 1; i<= N; i++)
		LGCD[i]= gcd(LGCD[i- 1], in[i]);
	for(i= N; i>= 1; i--)
		RGCD[i]= gcd(RGCD[i+ 1], in[i]);
	
	for(i= 1; i<= N; i++)
	{
		int tAns= gcd(LGCD[i-1], RGCD[i+1]);
		if(tAns> ans && ((in[i]% tAns)!= 0))
		{
			ans= tAns;
			excN= in[i];
		}
	}
	
	if(ans== -1) cout << "-1\n";
	else cout << ans << " " << excN << "\n";
	
	return 0;
}
*/
