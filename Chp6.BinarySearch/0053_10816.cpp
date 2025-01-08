// BOJ 10816
// Ver1. Using MAP STL
//
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//map<int, int> in;
//
//int main()
//{
//	cin.tie(0);
//	ios_base::sync_with_stdio(false);
//	
//	int N, M, i, t;
//	
//	cin >> N;
//	for(i= 0; i< N; i++)
//	{
//		cin >> t;
//		if(in.find(t)!= in.end())
//			in[t]++;
//		else
//			in.insert({t, 1});
//	}
//	
//	cin >> M;
//	for(i= 0; i< M; i++)
//	{
//		cin >> t;
//		if(in.find(t)!= in.end())
//			cout << in[t];
//		else
//			cout << "0";
//		cout << " ";
//	}
//	cout << "\n";
//	
//	return 0;
//}

// BOJ 10816
// Ver2. Using Binary Search

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> beforeIn;
vector<pair<int, int>> in;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, t, i, L, R, mid;
	
	// Input Session
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> t;
		beforeIn.push_back(t);
	}
	sort(beforeIn.begin(), beforeIn.end());
	
	// Counting Session
	for(i= 0; i< N; i++)
	{
		bool find= false;
		L= 0;
		R= in.size() -1;
		
		while(L<= R)
		{
			mid= (L+R)/2;
			if(beforeIn[i] < in[mid].first) R= mid -1;
			else if(beforeIn[i] > in[mid].first) L= mid +1;
			else
			{
				in[mid].second++;
				find= true;
				break;
			}
		}
		if(!find)
			in.push_back({beforeIn[i], 1});
	}
	
	//Print Session
	cin >> M;
	for(i= 0; i< M; i++)
	{
		cin >> t;
		
		bool find= false;
		L= 0;
		R= in.size() -1;
		
		while(L<= R)
		{
			mid= (L+R)/2;
			if(t < in[mid].first) R= mid -1;
			else if(t > in[mid].first) L= mid +1;
			else
			{
				find= true;
				cout << in[mid].second << " ";
				break;
			}
		}
		if(!find)
			cout << "0 ";
	}
	cout << "\n";
	
	return 0;
}
