/*
// BOJ 18870
// 1. Using Vector. -> Time over
// 2. using lower_bound & idea. remind later.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> dot, s_dot;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j;
	int in;
	
	cin >> N;
	
	for(i= 0; i< N; i++)
	{
		cin >> in;
		dot.push_back(in);
		s_dot.push_back(in);
	}
	
	sort(s_dot.begin(), s_dot.end());
	s_dot.erase(unique(s_dot.begin(), s_dot.end()), s_dot.end());
	
	for(i= 0; i< N; i++)
	{
		auto iter= lower_bound(s_dot.begin(), s_dot.end(), dot[i]);
		cout << iter - s_dot.begin() << " ";
	}
	
	return 0;
}
*/
