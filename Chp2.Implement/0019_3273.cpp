/*
BOJ 3273
1) X-in[i] case : If, in[i] > X => then array out of bounds error
2) in[i] == X-in[i] case : In problem condition, input numbers are DIFFERENT numbers. so abandon this case.
3) array size 1,000,000 => 
#include <iostream>
#define LEN 1000001

using namespace std;

int in[LEN];
int cnt[LEN];
int N, X, i, j, t;
long long res= 0;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N;
	
	for(i= 0; i< LEN; i++)
		cnt[i]= 0;
	
	for(i= 0; i< N; i++)
	{
		cin >> in[i];
		cnt[in[i]]++;
	}
	cin >> X;
	
	
	for(i= 0; i< N; i++)
	{
		while((in[i]< X) && (in[i] != X-in[i]) && (cnt[in[i]]> 0) && (cnt[X-in[i]]> 0))
		{ 
			cnt[in[i]]--;
			cnt[X-in[i]]--;
			res++;
		}
	}
	
	cout << res << "\n";
				
	return 0;
}


#include <iostream>

using namespace std;

int in[100005];
bool cnt[1000002];

int main()
{
	cin.tie(null);
	ios_base::sync_with_stdio(false);
	
	int N, X, i, res= 0;
	
	cin >> N;
	
	for(i= 0; i< 1000002; i++)
		cnt[i]= 0;
	
	for(i= 0; i< N; i++)
	{
		cin >> in[i];
		cnt[in[i]]= true;
	}
	cin >> X;
	
	for(i= 1; i<= (X-1)/2; i++)
		if(cnt[i] && cnt[X-i])
			res++;
			
	cout << res << "\n";
	
	return 0;
}
*/
