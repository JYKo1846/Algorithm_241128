/*

// BOJ 1730

#include <iostream>
#include <string>

using namespace std;

bool ver_bd[12][12], hor_bd[12][12];
int dir[4][2]= {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, i, j, wd, ci, cj, ni, nj;		// ci, cj : cur_i, cur_j / ni, nj : next_i, next_j
	string cmd;
	
	for(i= 0; i< 12; i++) 
	{
		for(j= 0; j< 12; j++) 
		{
			ver_bd[i][j]= 0;
			hor_bd[i][j]= 0;
		}
	}
	
	cin >> N;
	cin >> cmd;
	
	wd= 0;
	ci= cj= 0;
	while(cmd[wd] != '\0')
	{
		cout << "CURRENT CMD[WD] : " << cmd[wd] << "\n";
		
		int cdir= -1;

		if(cmd[wd]== 'U')
			cdir= 0;
		else if(cmd[wd]== 'R')
			cdir= 1;
		else if(cmd[wd]== 'D')
			cdir= 2;
		else if(cmd[wd]== 'L')
			cdir= 3;
		
		cout << "CURRENT DIRECTION : " << cdir << "\n";
		cout << "CURRENT POSITION : " << ci << " / " << cj << "\n";
		ni= ci+ dir[cdir][0];
		nj= cj+ dir[cdir][1];
		cout << "NEXT POSITION : " << ni << " / " << nj << "\n";
		
		if((0<= ni && ni< N) && (0<= nj && nj< N))
		{
			if(cdir== 0 || cdir== 2)
			{
				ver_bd[ci][cj]= 1;
				ver_bd[ni][nj]= 1;
			}
			else if(cdir== 1 || cdir== 3)
			{
				hor_bd[ci][cj]= 1;
				hor_bd[ni][nj]= 1;
			}
			
			ci= ni;
			cj= nj;
		}
		wd++;
	}
			
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			if(!ver_bd[i][j] && !hor_bd[i][j])
				cout << ".";
			else if(ver_bd[i][j] && !hor_bd[i][j])
				cout << "|";
			else if(!ver_bd[i][j] && hor_bd[i][j])
				cout << "-";
			else if(ver_bd[i][j] && hor_bd[i][j])
				cout << "+";
		}
		cout << "\n";
	}
	
	return 0;
}
*/
