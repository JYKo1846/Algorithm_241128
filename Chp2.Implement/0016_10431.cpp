/*
BOJ 10431 Line-up
Wrong reason : 
case 1) in[0][j] < in[j][k] :: in[j+1][l] = in[j][l] (X) ==> in[j+1][l+1] = in[j][l];
case 2) in[0][j] >= in[j][k] :: in[j+1][l] = in[j][l] && in[j+1][l+1] = in[0][j];

#include <stdio.h>
#define LEN 20
int main()
{
	int TC;
	int res= 0, i, j, k, l;
	int in[22][22];
	
	scanf("%d", &TC);
	for(i= 0; i< TC; i++)
	{
		
		for(j= 0; j< 22; j++)
			for(k= 0; k< 22; k++)
				in[j][k]= 0;
		res= 0;
		
		int order;
		scanf("%d", &order);
		for(j= 0; j< LEN; j++)
			scanf("%d", &in[0][j]);
		
		
		in[1][0]= in[0][0];
		for(j= 1; j< LEN; j++)
		{ 
			for(k= 0; k< j; k++)
			{
				if((in[0][j]< in[j][k]))
				{
					in[j+1][k]= in[0][j];
					for(l= k; l< j; l++)
					{
						in[j+1][l+1]= in[j][l];
//						printf("in[j][l] : %d / in[j+1][l] : %d\n", in[j][l], in[j+1][l]);
						res++;
					}
					break;
				}
				else
				{
					in[j+1][k]= in[j][k];
//					printf("in[j][k] : %d / in[j+1][k] : %d\n", in[j][k], in[j+1][k]);
				}
			}
			if(k== j)
				in[j+1][k]= in[0][j];
//			
//			printf("CURRENT J : %d\n", j);
//			for(l= 0; l< j+1; l++)
//				printf("%d ", in[j+1][l]);
//			printf("\nCURRENT RESULT : %d\n", res);
		}
		
		printf("%d %d\n", order, res);
		
//		for(k= 0; k< 21; k++)
//		{
//			for(j= 0; j< k; j++)
//				printf(" %d ", in[k][j]);
//			printf("\n");
//		}
	}
	
	return 0;
}

#define LEN 20
#include <stdio.h>

int main()
{
	int TC, i, j, k, order, res= 0;
	int in[22];
	
	scanf("%d", &TC);
	for(i= 0; i< TC; i++)
	{
		scanf("%d", &order);
		for(j= 0; j< LEN; j++)
			scanf("%d", &in[j]);
		
		
		for(j= 0; j< LEN; j++)
			for(k= 0; k< j; k++)
				if(in[k]> in[j]) res++;
	
		printf("%d %d\n", order, res);
		res= 0;
	}
	
	return 0;
}
*/
