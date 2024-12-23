// BOJ 17232
/*
// Code1. Case K== 1, PASS. Scored 100.
#include <iostream>

using namespace std;

bool in[102][102];
bool bfr[102][102];
int aft[102][102];
int N, M, K;

void check(int x, int y, int areaNum)
{
	int i, j;

	for(i= x- areaNum -1; i<= x+ areaNum +1; i++)
	{
		if(0<= i && i< N)
		{
			for(j= y- areaNum -1; j<= y+ areaNum +1; j++)
			{
				if(0<= j && j< M && !(i== x && j== y))
				{
					aft[i][j]++;
				}
			}
		}
	}
}
					
	

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int T, a, b, i, j;
	char t;
	
	cin >> N >> M >> T;
	cin >> K >> a >> b;
	
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			cin >> t;
			if(t== '.') in[i][j]= 0;
			else if(t== '*') in[i][j]= 1;
		}
	}
	
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			bfr[i][j]= in[i][j];
	
	while(T-- > 0)
	{
		for(i= 0; i< N; i++)
			for(j= 0; j< M; j++)
				if(bfr[i][j])
					check(i, j, K);

		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)
			{
				if(bfr[i][j])
				{
					if(a<= aft[i][j] && aft[i][j]<= b)
					{
						bfr[i][j]= 1;
						aft[i][j]= 0;
					}
					else if(aft[i][j]< a || b< aft[i][j])
					{
						bfr[i][j]= 0;
						aft[i][j]= 0;
					}
				}
				else
				{
					if(a< aft[i][j] && aft[i][j]<= b)
					{
						bfr[i][j]= 1;
						aft[i][j]= 0;
					}
					else
					{
						bfr[i][j]= 0;
						aft[i][j]= 0;
					}
				}
			}
		}
	}
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(bfr[i][j])
				cout << "*";
			else
				cout << ".";
		}
		cout << "\n";
	}
	cout << "\n";
	
	return 0;
}
*/
//Code2. Use PrefixSum
/*
#include <algorithm>
#include <iostream>

using namespace std;

char in[105][105];
int acc[105][105];

void setPrefixSum(int N, int M, int K)
{
	for(int i= 1; i<= N; i++)
	{
		for(int j= 1; j<= M; j++)
		{
			acc[i][j]= acc[i-1][j] + acc[i][j-1] - acc[i-1][j-1];
			if(in[i][j]== '*')
				acc[i][j]++;
		}
	}
}

int getRangeSum(int N, int M, int i, int j, int K)
{
	int left= max(0, j- K -1);
	int right= min(M, j+ K);
	int up= max(0, i- K -1);
	int down= min(N, i+ K);
	
	return acc[down][right] - acc[down][left] - acc[up][right] + acc[up][left];
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M, T, K, A, B;
	int i, j;
	char t;
	
	cin >> N >> M >> T;
	cin >> K >> A >> B;
	
	for(i= 0; i<= N; i++) 
	{
		for(j= 0; j<= M; j++) 
		{
			in[i][j]= 0;
			acc[i][j]= 0;
		}
	}
	
	for(i= 1; i<= N; i++)
		for(j= 1; j<= M; j++)
			cin >> in[i][j];
			
	while(T-- > 0)
	{
		setPrefixSum(N, M, K);
		for(i= 1; i<= N; i++)
		{
			for(j= 1; j<= M; j++)
			{
				int nearAlive= getRangeSum(N, M, i, j, K);
				if(in[i][j]== '*')
				{
					nearAlive--;
					if(nearAlive < A || B < nearAlive)
						in[i][j]= '.';
				}
				else if(A < nearAlive && nearAlive <= B)
					in[i][j]= '*';
			}
		}
	}
	
	for(i= 1; i<= N; i++)
	{
		for(j= 1; j<= M; j++)
			cout << in[i][j];
		cout << "\n";
	}
	
	return 0;
}
*/
