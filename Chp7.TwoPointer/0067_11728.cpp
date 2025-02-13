// BOJ 11728
/* Ver.1 Using Vector insert() & sort() 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> A, B, res;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int N, M, i, t;
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
	{
		cin >> t;
		A.push_back(t);
	}
	
	for(i= 0; i< M; i++)
	{
		cin >> t;
		B.push_back(t);
	}
	
	A.insert(A.end(), B.begin(), B.end());
	sort(A.begin(), A.end());
	
	for(vector<int>::iterator it= A.begin(); it != A.end(); it++)
		cout << *it << " ";
	cout << "\n";
	
	return 0;
}
*/
// Ver.2 Using Two pointer
/*
#include <iostream>

using namespace std;

int A[1000005], B[1000005];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int N, M, i;
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
		cin >> A[i];
	
	for(i= 0; i< M; i++)
		cin >> B[i];
	B[M]= -1000000005;
	
	int idx_A= 0, idx_B= 0;
	
	while(idx_A< N && idx_B < M)
	{
		if(A[idx_A] > B[idx_B])
			cout << B[idx_B++];
		else
			cout << A[idx_A++];
		cout << " ";
	}
	
	while(idx_A < N) cout << A[idx_A++] << " ";
	while(idx<B < M) cout << B[idx_B++] << " ";
	cout << "\n";
	
	return 0;
}
*/
