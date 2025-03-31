// BOJ 14465
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int light[100005];
	int N, K, B;
	int i, st, tmpFix, ans;
	
	scanf("%d %d %d", &N, &K, &B);
	memset(light, 0, N*sizeof(int));
	
	for(i= 0; i< B; i++)
	{
		int tmp_light;
		scanf("%d", &tmp_light);
		light[tmp_light]= 1;
	}
	
	
	tmpFix= 0;
	for(i= 1; i<= K; i++)
		tmpFix+= light[i];
	ans= tmpFix;
	
	st= 1;
	for(i= K+1; i<= N; i++)
	{
		tmpFix+= light[i];
		tmpFix-= light[st++];
		ans= ans < tmpFix ? ans : tmpFix;
	}
		
	printf("%d\n", ans);
	
	return 0;
}
*/
