
//BOJ 3085
/*
Feature : Solving time is longer than Java Code. Need to know WHY.

#include <iostream>

using namespace std;


char in[52][52];
char tmp[52][52];
int dir[4][2]= {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int N;

int search()
{	
	int i, j, t_res, res = 1;
	int tmp_i, tmp_j, ttmp_i, ttmp_j;
	
	
//	cout << "\nNEW TMP ARRAY \n";
//	for(i= 0; i< N; i++)
//	{
//		for(j= 0; j< N; j++)
//			cout << tmp[i][j] << " ";
//		cout << "\n";
//	}
	
	
	for(i= 0; i< N; i++)
	{
		
		for(j = 0; j< N; j++)
		{
			for(int d = 1; d< 3; d++)
			{
				t_res = 1;
				tmp_i = i;
				tmp_j = j;
				ttmp_i = tmp_i + dir[d][0];
				ttmp_j = tmp_j + dir[d][1];
				
				for(;(0 <= ttmp_i && ttmp_i < N) && (0 <= ttmp_j && ttmp_j < N) ;)
				{
					if(tmp[tmp_i][tmp_j] == tmp[ttmp_i][ttmp_j]) t_res++;
					else break;
					tmp_i= ttmp_i;
					tmp_j= ttmp_j;
					ttmp_i= tmp_i+ dir[d][0];
					ttmp_j= tmp_j+ dir[d][1];
				}
				
				res= res > t_res ? res : t_res;
			}
		}
	}
//	cout << "\nRESULT : " << res << "\n";
	return res;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int i, j, d, res= 0;
	
	cin >> N;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			cin >> in[i][j];
			tmp[i][j]= in[i][j];
		}
	}
			
	
	//change
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			for(int d= 0; d< 4; d++)
			{
				int tmp_i= i+dir[d][0];
				int tmp_j= j+dir[d][1];
				
				if(tmp_i < 0 || tmp_i >= N) continue;
				if(tmp_j < 0 || tmp_j >= N) continue;
				
				if(tmp[i][j] != tmp[tmp_i][tmp_j])
				{
					char t= tmp[i][j];
					tmp[i][j]= tmp[tmp_i][tmp_j];
					tmp[tmp_i][tmp_j]= t;
					
					int t_res= search();
					res= res > t_res ? res : t_res;
					
					// restore
					t= tmp[tmp_i][tmp_j];
					tmp[tmp_i][tmp_j]= tmp[i][j];
					tmp[i][j]= t;
				}	
			}
		}
	}
				
	cout << res << "\n";
	return 0;
}*/
