/*

// BOJ 18310

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a< b;
}

vector<int> home;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, t;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> t;
		home.push_back(t);
	}
	
	sort(home.begin(), home.end(), comp);
	
	int res_p;
	if(N%2)	res_p= N/2;
	else res_p= N/2 -1;
	
	cout << home[res_p] << "\n";
		
	return 0;
}
*/
