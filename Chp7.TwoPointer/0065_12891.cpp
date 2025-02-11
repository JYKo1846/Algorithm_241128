// BOJ 12891
/*
#include <iostream>
#include <string>

using namespace std;

int numA, numC, numG, numT;
int curA, curC, curG, curT;	

int countAns(int tmpAns)
{
	if(numA <= curA && numC <= curC && numG <= curG && numT <= curT)
		return tmpAns+1;
	return tmpAns;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int S, P;
	string in;
	int ans= 0, i, idxL, idxR;
	
	cin >> S >> P;
	cin >> in;
	cin >> numA >> numC >> numG >> numT;
	
	curA= 0; curC= 0; curG= 0; curT= 0;
	
	
	for(i= 0; i< P; i++)
	{
		if(in[i]== 'A') curA++;
		if(in[i]== 'C') curC++;
		if(in[i]== 'G') curG++;
		if(in[i]== 'T') curT++;
	}
	
	ans= countAns(ans);
	
	for(idxL= 0; idxL< S- P; idxL++)
	{
		if(in[idxL]== 'A') curA--;
		if(in[idxL]== 'C') curC--;
		if(in[idxL]== 'G') curG--;
		if(in[idxL]== 'T') curT--;
		
		if(in[idxL+P]== 'A') curA++;
		if(in[idxL+P]== 'C') curC++;
		if(in[idxL+P]== 'G') curG++;
		if(in[idxL+P]== 'T') curT++;
	
		ans= countAns(ans);
	}
	
	cout << ans << "\n";
	
	return 0;
}
*/
