/*
// BOJ 1110

#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int in, i, j, res= 0, t_in= 0, r_in= 0;
	
	cin >> in;
	t_in= in;
	
	while(1)
	{
		res++;
		int ten= 0, one= 0;
		if(t_in>= 10) ten= t_in/ 10;
		one= t_in% 10;
	 	
		int t= ten+ one;
		t%= 10;
		t_in= one*10 + t;
		
		if(in== t_in) break;
	}
	
	cout << res << "\n";
		
	return 0;
}
*/
