/*
BOJ 2675 
Imply with C, result string has trash value & problem not solved. so use C++ code
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int TC, rpt;
	string in, out;
	
	cin >> TC;
	
	for(int i= 0; i< TC; i++)
	{
		cin >> rpt >> in;
		for(int j= 0; j< in.length(); j++)
			for(int k= 0; k< rpt; k++)
				out.push_back(in[j]);
				
		cout << out << endl;
		out.clear();
	}
	return 0;
}*/
