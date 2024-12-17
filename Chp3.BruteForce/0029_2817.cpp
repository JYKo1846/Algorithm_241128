/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int X, N;

vector<pair<int, char>> staff;
vector<pair<int, char>> alps;
int coin[28];			// coin[X-'A'] : number of staff X 's coin 
bool used[28];

bool cmp(pair<int, char> a, pair<int, char> b)
{
	if(a.first == b.first)
		return a.second > b.second;
	else
		return a.first > b.first;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int i, j;
	
	cin >> X >> N;
	
	int min= X/ 100 * 5;
	
	for(i= 0; i< 28; i++) 
	{
		coin[i]= 0;
		used[i]= 0;
	}
	
	for(i= 0; i< N; i++)
	{
		char name;
		int gett;
		
		cin >> name >> gett;		
		if(gett>= min)
		{
			pair<int, char> t= make_pair(gett, name);
			staff.push_back(t);
			used[name- 'A']= 1;
		}
	}
	
	for(i= 0; i< staff.size(); i++)
	{
		for(j= 1; j< 15; j++)
		{
			pair<int, char> t= make_pair(staff[i].first / j, staff[i].second);
			alps.push_back(t);
		}
	}
	
	sort(alps.begin(), alps.end(), cmp);
	
	for(i= 0; i< 14; i++)
	{
		coin[alps[i].second - 'A'] ++;
	}
	
	for(i= 0; i< 28; i++)
	{
		if(used[i])
			cout << char('A'+ i) << " " << coin[i] << "\n";
	}
	
	return 0;
}
*/
