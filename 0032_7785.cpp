/*
// BOJ 7785
// 1,2,3 -> Using Vector -> Overtime
// 4 => using map Data structure & PASS.
#include <iostream>
#include <map>

using namespace std;

map<string, int, greater<string>> in_build;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int N, i, j;
	string name, EoL;
	map<string, int> ::iterator iter;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> name >> EoL;
		if(EoL.compare("enter")== 0)
		{
			in_build.insert({name, 1});
		}
		else if(EoL.compare("leave")== 0)
		{
			
			if(in_build.find(name)!= in_build.end())
			{
				in_build.erase(name);
			}
		}
	}
	
	for(iter= in_build.begin(); iter!= in_build.end(); iter++)
		cout << iter->first << "\n";
		
	return 0;
}
*/
