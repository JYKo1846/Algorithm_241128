// BOJ 2343
/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> in;

int calcBlu(int availCap)
{
	int num= 1;
	int remainCap= availCap;
	for(int i= 0; i< in.size(); i++)
	{
		if(remainCap < in[i])
		{
			remainCap= availCap - in[i];
			if(remainCap< 0) num= 10005;
			num++;
		}
		else
			remainCap-= in[i];
	}
	return num;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int N, M, totCap= 0;		// N : lectures number, M : available Blu-ray number, maxCap : total capacity of lectures 
	
	cin >> N >> M;
	for(int i= 0; i< N; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
		totCap+= t;
	}
	
	int L, R, availCap, X;
	L= 0;
	R= totCap;
	
	while(L<= R)
	{
		availCap= (L + R) /2;
		if(calcBlu(availCap)<= M)
		{
			R= availCap - 1;
			X= availCap;
		}
		else
			L= availCap + 1;
	}
	
	cout << X << "\n";
	
	return 0;
}
*/
