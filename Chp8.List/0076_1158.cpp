//BOJ 1158

#include <iostream>
#include <list>

using namespace std;

list<int> ls;

int main()
{
	int N, K;
	
	cin >> N >> K;
	
	for(int i= 1; i<= N; i++) ls.push_back(i);
	list<int>::iterator it= ls.begin();
	
	cout << "<";
	while(!ls.empty())
	{
		//cout << "CURRENT CURSOR POSITION : " << *it << "\n";
		//for(auto ttt= ls.begin(); ttt!= ls.end(); ttt++) cout << *ttt << " ";
		//cout << "\n";
		int tK= K-1;
		while(tK--> 0)
		{
			if(*it== ls.back()) it= ls.begin();
			else it++;
		}
		cout << *it;
		if(ls.size()!= 1) cout << ", ";
		it= ls.erase(it);
		if(it== ls.end()) it= ls.begin();
	}
	cout << ">";
	
	return 0;
}
