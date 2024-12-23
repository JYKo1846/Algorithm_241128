// BOJ 11660
/*

#include <iostream>

using namespace std;

int in[1026][1026], acc[1026][1026];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, i, j, t;
	int hd_x, hd_y, tl_x, tl_y, res;
	
	for(i= 0; i< 1026; i++) for(j= 0; j< 1026; j++) acc[i][j]= 0;
	
	cin >> N >> M;
	
	for(i= 1; i<= N; i++) 
	{
		for(j= 1; j<= N; j++)
		{
			cin >> in[i][j];
			acc[i][j]= acc[i][j-1]+ in[i][j];
		}
	}
	
	while(M--)
	{
		res= 0;
		cin >> hd_x >> hd_y >> tl_x >> tl_y;
		
		for(i= hd_x; i<= tl_x; i++)
			res+= acc[i][tl_y]-acc[i][hd_y-1];
		
		cout << res << "\n";
	}
	
	return 0;
}
*/
