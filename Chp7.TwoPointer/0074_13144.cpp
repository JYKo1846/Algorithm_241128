// BOJ 13144
// CODE1. Use Twopointer & hold start pointer
/*
#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, ans, tot;
	bool used[100005]; 
	int in[2][100005];
	
	cin >> N;
	for(i= 1; i<= N; i++) 
	{
		cin >> in[0][i];
		used[i]= 0;
	}
	
	int lp, rp;
	rp= 1;
	ans= tot= 0;
	in[0][0]= 0;
	
	while(rp<= N)
	{
		if(!used[in[0][rp]])
		{
			used[in[0][rp]]= 1;
			in[1][rp++]= ++tot;
		}
		else		// if, find same number
		{
			for(lp= rp-1; lp>= 1; lp--)
			{
				if(in[0][lp]== in[0][rp])
				{
					tot= tot - in[1][lp] + 1;
					used[in[0][rp]]= 1;
					in[1][rp++]= tot;
					break;
				}
			}
		}
		ans+= tot;
		cout << "CURRENT POS : " << rp -1<< " / CURRENT ANS : " << ans << "\n";
	}
	
	cout << "\n";
	for(rp= 0; rp<= N; rp++) cout << in[1][rp] << " ";
	cout << "\n";
	
	cout << ans << "\n";		
	
	return 0;
}

*/

// CODE2. Use TwoPointer & Moving start Pointer
/*
#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int N, st, en;
	bool used[100005];
	int in[100005];
	long long ans= 0;
	
	cin >> N;
	for(int i= 0; i< N; i++)
	{
		cin >> in[i];
		used[i]= 0;
	}
	
	en= 0;
	for(st= 0; st< N; st++)
	{
		while(en< N)
		{
			if(used[in[en]]== 1)
				break;
			used[in[en++]]= 1;
		}
		
		ans+= en- st;
		used[in[st]]= 0;
	}
	
	cout << ans << "\n";
	return 0;
}
*/
