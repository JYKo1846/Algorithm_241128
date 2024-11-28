/*
BOJ 2908
#include <stdio.h>

int calc(int x)
{
	return x/100 + (x%100)/10 * 10 + (x%10)*100;
}

int main()
{
	int a, b;
	int na, nb, res;
	
	scanf("%d %d", &a, &b);
	
	na= calc(a);
	nb= calc(b);
	
	printf("%d\n", na > nb ? na : nb);
	return 0;
}
*/
