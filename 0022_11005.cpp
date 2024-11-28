/*
BOJ 11005
#include <iostream>
#include <vector>

using namespace std;

vector<char> res;

void pushN(int a)
{
	if(a< 10) res.push_back('0'+ (char)a);
	else res.push_back('A'+ (char)(a-10));
	
//	for(int i= 0; i< res.size(); i++)
//		cout << res[i];
//	cout << "\n";
//	
	return ;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	long long N, X;
	
	cin >> N >> X;
	while(N> X)
	{
		pushN(N%X);
		N/= X;
	}
	if(N== X) 
	{
		pushN(0);
		pushN(1);
	}
	else pushN(N);
	
	for(int i= res.size()-1; i>= 0; i--)
		cout << res[i];
	cout << "\n";
	
	return 0;
}
*/
