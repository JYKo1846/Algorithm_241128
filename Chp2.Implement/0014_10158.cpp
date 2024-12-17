
// BOJ 10158
/*
#include <stdio.h>
#include <stdlib.h>

int pos[2][500000];		// pos[0][i] : i's ant x position / pos[1][i] : i's ant y position
int curD[2]= {1, 1};		// ant's moving direction. 0 : +1, +1 / 1 : +1, -1, / 2 : -1, -1 / 3 : -1, 1
int w, h, t;												// w : width, h : height, t : need to know time


bool ant_move(int curT)
{
	int nextD;
		
//	printf("curT : %d\n", curT); 
	
	// calculate current position
	pos[0][curT]= pos[0][curT-1] + curD[0];
	pos[1][curT]= pos[1][curT-1] + curD[1];
	
//	printf("curX : %d / curY : %d\n", pos[0][curT], pos[1][curT]);
	
	// calculate next direction
	if(pos[0][curT]== 0 || pos[0][curT]== w)
		curD[0]*= -1;
	if(pos[1][curT]== 0 || pos[1][curT]== h)
		curD[1]*= -1;

	if((pos[0][curT]== pos[0][0] && pos[1][curT]== pos[1][0]) && (curD[0]== 1 && curD[1]== 1))
		return false;
	else
		return true;
}

int main()
{
	int totC= 1;
	int start_x, start_y;
	
	for(int i= 0; i< 2; i++)
		for(int j= 0; j< 500000; j++) 
			pos[i][j]= -1;
	
	scanf("%d %d", &w, &h);
	scanf("%d %d", &start_x, &start_y);
	scanf("%d", &t);
	
	pos[0][0]= start_x;
	pos[1][0]= start_y;
	
	while(ant_move(totC++))
	{
	
	}
	
	printf("%d %d\n", pos[0][t%(totC-1)], pos[1][t%(totC-1)]);
	//printf("CURRENT TOTAL COUNT : %d\n", totC);
	
	return 0;
}

// use vector & pair library. But, memory overflow.
#include <iostream>
#include <vector>

using namespace std;

int w, h, t;
vector<pair<int, int>> pos;
pair<int, int> curD;

bool ant_move(int curT)
{
	pair<int, int> nxt;
	
	nxt = make_pair(pos[curT-1].first+ curD.first, pos[curT-1].second+ curD.second);
	pos.push_back(nxt);
		
	// calculate next direction
	if(nxt.first== 0 || nxt.first== w)
		curD.first*= -1;
	if(nxt.second== 0 || nxt.second== h)
		curD.second*= -1;

	cout << "nxt : " << nxt.first << " " << nxt.second << endl;

	if((nxt.first== pos[0].first && nxt.second== pos[0].second) && (curD.first== 1 && curD.second== 1))
		return true;
	else
		return false;
}

int main()
{
	int totC= 1;
	pair<int, int> startV;
	
	cin >> w >> h;
	cin >> startV.first >> startV.second;
	cin >> t;
	
	pos.push_back(startV);
	curD= make_pair(1, 1);

	while(1)
	{
		if(ant_move(totC++))
			break;
	}
	
	cout << pos[t%(totC-1)].first << " " << pos[t%(totC-1)].second << endl;
	
	return 0;
}

// PASS CODE. Calculate only "w-start_x <= t && h-start_y <= t "
#include <stdio.h>

int main()
{
	int w, h, t, start_x, start_y;
	int nx, ny, xt, yt;
	
	scanf("%d %d", &w, &h);
	scanf("%d %d", &start_x, &start_y);	
	scanf("%d", &t);
	
	if((t>= (w-start_x)) && (t>= (h-start_y)))
	{ 
		xt= (t-(w-start_x))%(w*2);
		yt= (t-(h-start_y))%(h*2);
		
		nx= w;
		ny= h;
	}
	else
	{
		xt= 0;
		yt= 0;
		
		nx= start_x+ t;
		ny= start_y+ t;
	}
	
	
	
	while(xt> 0)
	{
		if(nx== 0)
		{
			if(xt>= w)
			{
				nx= w;
				xt-= w;
			}
			else
			{
				nx+= xt;
				xt= 0;
			}
		}
		else if(nx== w)
		{
			if(xt>= w)
			{
				nx= 0;
				xt-= w;
			}
			else
			{
				nx-= xt;
				xt= 0;
			}
		}
	}
	
	while(yt> 0)
	{
		if(ny== 0)
		{
			if(yt>= h)
			{
				ny= h;
				yt-= h;
			}
			else
			{
				ny+= yt;
				yt= 0;
			}
		}
		else if(ny== h)
		{
			if(yt>= h)
			{
				ny= 0;
				yt-= h;
			}
			else
			{
				ny-= yt;
				yt= 0;
			}
		}
	}
	
	printf("%d %d\n", nx, ny);
	return 0;
}

// FASTCAMPUS CODE
// #1 solution. If, w&h is 200,000,000, Timeout code
// O(N)

int main()
{
	int w, h, t, start_x, start_y;
	int nx, ny, tx, ty, dx, dy;
	
	scanf("%d %d", &w, &h);
	scanf("%d %d", &start_x, &start_y);	
	scanf("%d", &t);
	
	nx= x;
	dx= 1;
	tx= t%(w*2);
	while(tx-- > 0)
	{
		if(nx== w) dx= -1;
		else if(nx== 0) dx= 1;
		nx+= dx;
	}
	
	ny= y;
	dy= 1;
	ty= t%(h*2);
	while(ty-- > 0)
	{
		if(ny== h) dy= -1;
		else if(ny== 0) dy= 1;
		ny+= dy;
	}
	
	printf("%d %d\n" , nx, ny);
	return 0;
}

// #2 solution
// O(1)
int main()
{
	int w, h, t, start_x, start_y;
	int nx, ny, tx, ty, dx, dy;
	
	scanf("%d %d", &w, &h);
	scanf("%d %d", &start_x, &start_y);	
	scanf("%d", &t);
	
	nx= (start_x + t) % (2*w);
	ny= (start_y + t) % (2*h);
	if(nx> w)
		nx= 2*w - nx;
	if(ny> h)
		ny= 2*h - ny;
	
	printf("%d %d\n", nx, ny);
	return 0;

}

*/
