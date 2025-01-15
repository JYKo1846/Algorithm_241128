// BOJ 2792
/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> in;

int calcStudent(int estJew)
{
	int studentN= 0;
	for(int i= 0; i< in.size(); i++)
	{
		studentN+= in[i] / estJew;
		if((in[i] % estJew) != 0) studentN++; 
	}
	return studentN;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, M;

	cin >> N >> M;
	for(int i= 0; i< M; i++)
	{
		int t;
		cin >> t;
		in.push_back(t);
	}
	
	int L, R, estJew, X;
	L= 1;
	R= 100000005;
	
	while(L<= R)
	{
		estJew= (L + R)/2;
		if(calcStudent(estJew) <= N)
		{
			R= estJew - 1;
			X= estJew;
		}
		else
			L= estJew + 1;
	}
	cout << X << "\n";
	return 0;
}
*/
