/*
// BOJ 10250

#include <iostream>

using namespace std;

int main()
{	
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int W, H, N;
	int TC;
	int YY, XX;
	
	cin >> TC;
	while(TC--)
	{
		cin >> H >> W >> N;
		
		YY = N % H;
		if(YY == 0) YY = H;
		
		XX = N / H;
		if((N % H) != 0) XX++;
		
		
		cout << YY;
		cout.width(2);
		cout.fill('0');
		cout << XX << "\n";
	}	
	return 0;
}

*/
