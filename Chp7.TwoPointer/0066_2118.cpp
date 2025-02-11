// BOJ 2118
// #Code 1. Time Over. => Because,  Worst case in Big-O : O(N * N) = O(N^2)
/*
#include <iostream>

using namespace std;

int in[50005];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N;
	int tot= 0, ans= -1, tmpLeft, tmpAns, idxR;
	
	cin >> N;
	for(int i= 0; i< N; i++)
	{
		cin >> in[i];
		tot+= in[i];
	}
	
/*	for(int i= 0; i< N; i++)
	{
		tmpLeft= in[i];
		if(tmpLeft >= tot- tmpLeft)
			ans= ans > tot- tmpLeft ? ans : tot - tmpLeft;
		idxR= i+1;
		
		while(tmpLeft < tot - tmpLeft && idxR%(N-1) != 0)
			tmpLeft+= in[(++idxR%N)];
		
		ans= ans > tot- tmpLeft ? ans : tot- tmpLeft;
	}
*/
/*
	idxR= 0;
	tmpLeft= 0;
	
	for(int i= 0; i< N; i++)
	{
		while(tmpLeft < tot - tmpLeft)
		{
			tmpLeft+= in[idxR];
			idxR= (idxR+1) % N;
		}
		
		ans= ans > tot - tmpLeft ? ans : tot - tmpLeft;
		tmpLeft -= in[i];
	}
	
	cout << ans << "\n";
*/
/*	
	cout << ans << "\n";
	
	return 0;
}
*/

// #Code 2. Two pointer
/*
#include <iostream>

using namespace std;

int in[50005];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int distanceSum= 0;
	int N;
	
	cin >> N;
	for(int i= 0; i< N; i++)
	{
		cin >> in[i];
		distanceSum+= in[i];
	}
	
	int pairIndex= 0;
	int distClockWise= 0;
	int distCounterClockWise= distanceSum;
	
	for(int i= 0; i< N; i++)
	{
		while(distClockWise < distCounterClockWise)
		{
			distClockWise += in[pairIndex];
			distCounterClockWise -= in[pairIndex];
			pairIndex = (pairIndex + 1) % N;
		}
		
		ans = ans > distCounterClockWise ? ans : distCounterClockWise;
		
		distClockWise -= in[i];
		distCounterClockWise += in[i];
	}
	
	cout << ans << "\n";
	
	return 0;
}
*/
