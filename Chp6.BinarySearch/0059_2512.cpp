// BOJ 2512
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> in;

int calcBud(int estBud)
{
	int totalBud= 0;
	for(int i= 0; i< in.size(); i++)
	{
		if(in[i]> estBud)
			totalBud+= estBud;
		else
			totalBud+= in[i];
	}
	return totalBud;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, D, T;		// N : cities number , D : city's demanded budget , T ; total budget
	int curTot= 0;		// Current total budjet
	int X= -1;			// X : answer variable
	
	cin >> N;
	for(int i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
		curTot+= t;
	}
	cin >> T;
	
	sort(in.begin(), in.end());
	
	if(curTot <= T) X= in.back();	// if, current total budget isn't exceed Total budget
	else
	{
		int L, R, estBud;
		L= 1;
		R= in.back();
		
		while(L<= R)
		{
			estBud= (L + R)/2;
			if(calcBud(estBud)<= T)
			{
				L= estBud + 1;
				X= estBud;
			}
			else
				R= estBud - 1;
		}
	}
	
	cout << X << "\n";
	
	return 0;
}
*/
