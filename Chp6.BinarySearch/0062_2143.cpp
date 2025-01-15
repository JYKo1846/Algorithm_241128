// BOJ 2143

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[1005], B[1005];
vector<int> combA, combB;

long long findLowerBound(vector<int> &findVec, int findVar)
{
	long long L= 0, R= findVec.size()-1, mid;
	long long lowerbound = -1;
	
	while(L<= R)
	{
		mid= (L + R)/2;
		if(findVec[mid]< findVar)
			L= mid + 1;
		else 
		{
			R= mid - 1;
			lowerbound= mid;
		}
	}
	return lowerbound;
}

long long findUpperBound(vector<int> &findVec, int findVar)
{
	long long L= 0, R= findVec.size()-1, mid;
	long long upperbound= findVec.size();
	
	while(L<= R)
	{
		mid= (L + R)/2;
		if(findVec[mid]<= findVar)
			L= mid + 1;
		else
		{
			R= mid - 1;
			upperbound = mid;
		}
	}
	return upperbound;
}


int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int T, N, M, i, j;
	long long sum;
	
	cin >> T >> N;
	for(i= 0 ; i< N; i++)
		cin >> A[i];
	
	cin >> M;
	for(i= 0; i< M; i++)
		cin >> B[i];
	
	for(i= 0; i< N; i++)
	{
		sum= A[i];
		combA.push_back(sum);
		
		for(j= i+1; j< N; j++)
		{
			sum+= A[j];
			combA.push_back(sum);
		}
	}
	
	for(i= 0; i< M; i++)
	{
		sum= B[i];
		combB.push_back(sum);
		
		for(j= i+1; j< M; j++)
		{
			sum+= B[j];
			combB.push_back(sum);
		}
	}
	
	sort(combB.begin(), combB.end());
	
//	cout << "CombA contents : ";
//	for(i= 0; i< combA.size(); i++) cout << combA[i] << " ";
//	cout << "\nCombB contents : ";
//	for(i= 0; i< combA.size(); i++) cout << combA[i] << " ";
//	cout << "\n";
		
	long long B_LB= 0, B_UB= 0;
	unsigned long long availTotNum= 0;
	
	
	for(int i= 0; i< combA.size(); i++)
	{
		int var= T - combA[i];
		B_LB= findLowerBound(combB, var);
//		B_LB= lower_bound(combB.begin(), combB.end(), var) - combB.begin();
		B_UB= findUpperBound(combB, var);
//		B_UB= upper_bound(combB.begin(), combB.end(), var) - combB.begin();
//		cout << "availANum : " << availANum << " / A_UB : " << A_UB << " / A_LB : " << A_LB << "\n"; 
//		cout << "availBNum : " << availBNum << " / B_UB : " << B_UB << " / B_LB : " << B_LB << "\n";
//		cout << "VAR : " << var << "\n";
//		cout << "Lowerbound : " << B_LB << "\n";
//		cout << "Upperbound : " << B_UB << "\n";
		availTotNum+= B_UB - B_LB;

	}
	
	cout << availTotNum << "\n";
	
	return 0;
}	

