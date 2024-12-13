/*
// BOJ 1431

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> serial;

bool comp(string a, string b)
{
	if(a.size()== b.size())
	{
		int ta= 0, tb= 0, i;
		
		for(i= 0; i< a.size(); i++)
		{
			if('0'<= a[i] && a[i] <= '9')
				ta+= a[i]- '0';
			if('0'<= b[i] && b[i] <= '9')
				tb+= b[i]- '0';
		}
		
		if(ta== tb)
			return a < b;
		else if (ta< tb)
			return 1;
		else
			return 0;
	}
	
	return a.size() < b.size();
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N;
	string in;
	
	cin >> N;
	while(N--)
	{
		cin >> in;
		serial.push_back(in);
	}
	
	sort(serial.begin(), serial.end(), comp);
	
	for(int i= 0; i< serial.size(); i++)
	{
		cout << serial[i] << "\n";
	}
	
	return 0;
}
*/
