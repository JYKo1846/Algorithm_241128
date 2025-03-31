// BOJ 10025
/*
#include <stdio.h>
#include <string.h>

int in[1000005];

int main()
{
	int N, K, i, g, end= -1;
	long long ans= 0, cur;
	
	memset(in, 0, 1000005*sizeof(int));
	
	scanf("%d %d", &N, &K);
	for(i= 0; i< N; i++)
	{
		int tg, tp;
		scanf("%d %d", &tg, &tp);
		in[tp]= tg;
		end= end > tp ? end : tp;
	}
	
	for(i= 0; i<= end; i++)
		if(i<= 2*K) ans+= in[i];
	
	cur= ans;
	for(i= 1; i+ 2*K<= end; i++)
	{
		cur-= in[i-1];
		cur+= in[i+2*K];
		ans= ans > cur ? ans : cur;
	}
	
	printf("%d\n", ans);
	
	return 0;
}
*/
