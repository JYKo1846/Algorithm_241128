// BOJ 16472
// Solve with Two Pointer Slide window 
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char in[100005];
	int usedAlpha[27];
	int N, usedAlphaN, i, nxt, ans, tmpLen;
		
	scanf("%d", &N);
	scanf("%s", in);
	memset(usedAlpha, 0, 27*sizeof(int));
	
	ans= tmpLen= 0;
	usedAlphaN= nxt= 0;
	for(i= 0; in[i]!= '\0'; i++)
	{
		while(in[nxt]!= '\0')
		{
			if(usedAlphaN== N && usedAlpha[in[nxt]-'a']== 0) break;
			if(usedAlpha[in[nxt]-'a']== 0) usedAlphaN++;
			usedAlpha[in[nxt++]-'a']++;
			tmpLen++;
		}
		
		ans= ans > tmpLen ? ans : tmpLen;
		usedAlpha[in[i]-'a']--;
		tmpLen--;
		if(usedAlpha[in[i]-'a']== 0) usedAlphaN--;
	}
	
	printf("%d\n", ans);
	
	return 0;
}
*/
