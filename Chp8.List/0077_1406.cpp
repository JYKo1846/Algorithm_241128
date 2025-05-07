// BOJ 1406
/*
#include <iostream>
#include <list>
#include <string>

using namespace std;

list<char> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int M;
	string in;
	char cmd, input;
	
	cin >> in;
	
	for(char c : in)
		arr.push_back(c);
		
	list<char>::iterator it= arr.end();
	
	cin >> M;
	cin.ignore();
	
	while(M--)
	{
		cin >> cmd;			
		if(cmd== 'L') {
			if(it!= arr.begin()) it--;
		}
		else if(cmd== 'D') {
			if(it!= arr.end()) it++;
		}
		else if(cmd== 'B') {
			if(it!= arr.begi()) it= arr.erase(--it);
		}
		else if(cmd== 'P')
		{
			cin >> input;
			arr.insert(it, input);
		}
		
	}

	for(char c : arr)
		cout << c;
	cout << "\n";	
	return 0;
}

*/
