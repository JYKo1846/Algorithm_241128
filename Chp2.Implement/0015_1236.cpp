/*
BOJ 1236
#include <stdio.h>

char in[52][52];
bool row_check[52][52];			// false (0) : not filled / true (1) : filled
bool col_check[52][52];			// false (0) : not filled / true (1) : filled

int main()
{
	int N, M;
	int i, j, k, res= 0, col_res= 0;
	
	for(i= 0; i< 52; i++)
	{
		for(j= 0; j< 52; j++) 
		{
			row_check[i][j]= 0;
			col_check[i][j]= 0;
		}
	}
	
	scanf("%d %d", &N, &M);
	
	for(i= 0; i< N; i++)
		scanf("%s", &in[i]);
			
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(in[i][j]== 'X')
			{
				for(k= 0; k< M; k++)
					row_check[i][k]= 1;
				for(k= 0; k< N; k++)
					col_check[k][j]= 1;
			}
		}
	}
	
	for(i= 0; i< N; i++)
		if(!row_check[i][0]) res++;

	for(i= 0; i< M; i++)
	{
		if(!col_check[0][i]) col_res++;
	}
	
	printf("%d\n", res > col_res ? res : col_res);
	
	return 0;
}

// #2 solution

#include <stdio.h>

char in[52][52];
bool row_check[52];			// false (0) : not filled / true (1) : filled
bool col_check[52];			// false (0) : not filled / true (1) : filled

int main()
{
	int N, M;
	int i, j, res= 0, col_res= 0;
	
	for(i= 0; i< 52; i++)
	{
		row_check[i]= 0;
		col_check[i]= 0;
	}
	
	scanf("%d %d", &N, &M);
	
	for(i= 0; i< N; i++)
		scanf("%s", &in[i]);
			
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(in[i][j]== 'X')
			{
				row_check[i]= 1;
				col_check[j]= 1;
			}
		}
	}
	
	for(i= 0; i< N; i++)
		if(!row_check[i]) res++;

	for(i= 0; i< M; i++)
		if(!col_check[i]) col_res++;
	
	printf("%d\n", res > col_res ? res : col_res);
	
	return 0;
}
*/
