/*
// Didn't Understand Problem. Need more time.
// Wrong at 2%
// BOJ 1739

#include <iostream>
#define LEN 1003

using namespace std;

int N, M, K;
bool town[LEN][LEN];		// [0] : Horizontal arrangement. [1] : Vertical arrangement.


int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int TC;
	bool ver, hor, in_range_x, in_range_y;		// in_range_* : If two points are in managed road or points are same.
	int i, j, x, y, nx, ny, res;								// res : number of point that in managed road
	int maxX, maxY, minX, minY;
	
	cin >> TC;
	while(TC--)
	{
		for(i = 0; i< LEN; i++) for(j = 0; j< LEN; j++) town[i][j]= 0;
		res = 0;
		ver = false;
		hor = false;
		
		cin >> N >> M >> K;
		for(i = 0; i< K; i++)
		{
			cin >> x >> y >> nx >> ny;
			in_range_x = false;
			in_range_y = false;
			
			// Case 1. x & y are different.
			if((x != nx) && (y != ny))
			{
				minX = x > nx ? nx : x;
				maxX = x > nx ? x : nx;
				minY = y > ny ? ny : y;
				maxY = y > ny ? y : ny;
				
			}
			
			// Case 2. x are same, y are different.
			if((x == nx) && (y != nx))
			{
				minX = maxX = x;
				minY = y > ny ? ny : y;
				maxY = y > ny ? y : ny;
				in_range_x = true;
			}
			
			// Case 3. x are different, y are same.
			if((x != nx) && (y == ny))
			{
				minX = x > nx ? nx : x;
				maxX = x > nx ? x : nx;
				minY = maxY = y;
				in_range_y = true;
			}
			
			// Case 4. x , y are same.
			if((x == nx) && (y == ny))
			{
				minX = maxX= x;
				minY = maxY= y;
				in_range_x = true;
				in_range_y = true;
			}
			
			// Check horizontal road.
			if(!(minY == maxY) && (!town[minX][minY] || !town[minX][maxY]) && !hor)
			{
				for(j = minY; j <= maxY; j++) 
				{
					town[minX][j] = true;
					hor = true;
					in_range_y = true;
				}
			}
			// Check horizontal road has been made already.
			else if(town[minX][minY] && town[minX][maxY])
			{
				in_range_y = true;
			}
			
			// Check veritcal road.	
			if(!(minX == maxX) && (!town[minX][maxY] || !town[maxX][maxY]) && !ver)
			{
				for(j = minX; j <= maxX; j++)
				{
					town[j][maxY] = true;
					ver = true;
					in_range_x = true;
				}
			}
			// Check vertical road has been made already.
			if(town[minX][maxY] && town[maxX][maxY])
			{
				in_range_x = true;
			}

			if(in_range_x && in_range_y) res++;			
		}
		if(res== K) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}*/
