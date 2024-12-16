/*
// First, Wrong answer at 2%. Because, cur= 1, S= 100 => t= -99, N=3 => t= -96.
// So, Solve with while(t< 0) t+= N; 
//BOJ 2840
#include <iostream>
#include <vector>

using namespace std;

char roll[26];
bool alpha[27];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, K, S, i, j, t, cur;	
	bool wrong= false;
	char tmp;
	
	for(i= 0; i< 26; i++)
		roll[i]= '?';
	for(i= 0; i< 27; i++)
		alpha[i]= 0;
	cur= 0;
	
	cin >> N >> K;
	
	for(i= 0; i< K; i++)
	{
		cin >> S >> tmp;
	
		t= cur- S;
		while(t< 0) t+= N;
		
		if(roll[t]== '?' && !alpha[tmp-'A']) {
			roll[t]= tmp;
			alpha[tmp-'A']= 1;
		}
		else if(roll[t]== tmp) ;
		else
			wrong= true;
		
		cur= t;

	}
	
	if(wrong) cout << "!";
	else
	{
		for(i= t; i< N; i++)
			cout << roll[i];
		for(i= 0; i< t; i++)
			cout << roll[i];
	}
	cout << "\n";
	return 0;
}*/
