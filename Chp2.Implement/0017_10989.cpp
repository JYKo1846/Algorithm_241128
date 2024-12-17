/*
BOJ 10989

#include <stdio.h>
#define LEN 10003
int in[LEN];

int main()
{
	int N, i, j, t;
	
	for(i= 0; i< LEN; i++) 
		in[i]= 0;
	
	scanf("%d", &N);
	for(i= 0; i< N; i++)
	{
		scanf("%d", &t);
		in[t]++;
	}
	
	for(i= 0; i< LEN; i++)
		for(j= in[i]; j> 0; j--)
			printf("%d\n", i);
			
	return 0;
}
*/
