# Chapter 6. 이분탐색 
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

"정렬"되어있는 집합에서 원하는 값을 찾는 효율적인 탐색 방법

임의의 값과 원하는 값을 비교하여 탐색범위를 줄일 수 있다.

M을 [L:R] 사이의 중앙값 ((L+R)/2의 인덱스에 있는 값)으로 지정하여 조사 범위를 반으로 줄여가며

탐색하는 방법.

```
while(L<= R)
{
	mid= (L+R)/2;
	if(in[mid] < X) R= mid -1;
	else if(in[mid] > X) L= mid +1;
	else return true;
}
```

위와 같이 탐색하려는 값 X가 중앙값 in[mid]보다 작을 경우, R= mid -1 위치로 탐색 범위 절반을 줄이고
X가 중앙값 in[mid]보다 클 경우, L= mid +1 위치로 탐색 범위를 절반 줄여 탐색하는 

O(logN) 의 수행 시간을 가지는 탐색 방법이다.

### 0049. BOJ 1920 수 찾기. S4
:page_with_curl: https://www.acmicpc.net/problem/1920

```
N개의 수로 이루어진 배열에서 X라는 숫자가 존재하는지 묻는 M번의 질문에 답하는
프로그램을 구현하는 문제이다.

단, 시간 제한 조건이 1초이고, N <= 100000 / M <= 100000  N,M 모두 10만이므로

완전 탐색으로 구현할 경우 10만 X 10만으로 1초의 시간을 초과하게 된다.

따라서, 이분 탐색을 이용하여 M번의 질문에 대해 답하도록 구현하였음. PASS

```

### 0050. BOJ 14425 문자열 집합. S4
:page_with_curl: https://www.acmicpc.net/problem/14425

```
N개의 문자열로 이루어진 집합 S에 입력으로 주어지는 M개의 문자열이 몇개 포함되어 있는지 구하는 
프로그램 작성.

문자열 비교에는 시간 소요가 많이 걸리므로 이분 탐색으로 구현하였음.

문자열 비교 함수 Str.compare(비교하려는 문자열)을 수행하여, Str이 비교 문자열보다 작을 경우

(사전 순으로 작거나, 길이가 더 짧을 경우) 음수로

Str이 비교 문자열보다 클 경우 (사전 순으로 크거나, 길이가 더 길 경우) 양수를 반환

같을 경우 0이 반환되는 것을 이용하여

while(L<= R)
{
	mid= (L+R)/2;
	if(query.compare(in[mid]) < 0) R= mid -1;
	else if(query.compare(in[mid])> 0) L= mid +1;
	else 
	{
		res++;
		break;
	}
}

로 구현하면 탐색을 시간 내에 할 수 있게 된다.

```

### 0051. BOJ 2295 세 수의 합. G4
:page_with_curl: https://www.acmicpc.net/problem/2295

```
N개의 자연수들로 이루어진 집합 U. (5<= N <= 1000) 이 중 세 수(중복 선택 가능)를 선택하여 합 했을 때

U에 포함되는 수가 될 수 있다. 그럴 경우, 그 수 중 가장 큰 수를 출력하는 프로그램을 만드는 문제.

완전 탐색으로 집합의 모든 수들의 합을 구할 경우, 수행시간이 O(N*N*N) = O(N^3) 이 된다.

따라서, A+B+C= X 에서, A+B= X-C 가 가능한 것을 이용하여,

A+B 모든 조합을 저장, X-C와 비교하여 해당 조합이 있을 경우, 그 중 가장 큰 X를 저장하도록 구현하여 

해결하였음. 그럴 경우, 수행 시간은 O(N*N + N*N)= O(2*N^2) = O(N^2) 가 된다.

while(L<= R)
{
	mid= (L+R)/2;
	if(X-C < A+B[mid]) R= mid -1;
	else if(X-C > A+B[mid]) L= mid +1;
	else
	{
		result= result > X ? result : X;
		break;
	}
}

위와 같이 이분 탐색을 구현하여 PASS함.

```

### 0052. BOJ 2470 두 용액. G5
:page_with_curl: https://www.acmicpc.net/problem/2470

```
N개의 정수로 이루어진 집합에 대해 두 수의 합이 0에 가장 가까울 수 있는 조합을 출력하는 문제.

완전 탐색으로 나올 수 있는 모든 조합을 구할 경우, O(N*N) = O(N^2) 으로 시간 초과가 걸리게 됨. ( 0<= N <= 100000)

A+B를 만드는 시간을 줄여야 된다고 생각 => 모든 원소를 절대값으로 비교하여 가장 비슷한 원소를 찾으려 했지만 이것 역시

시간이 오래 걸릴 것으로 생각되어 폐기.

이분 탐색을 적용해서 시간을 줄여야 된다고 생각. 이분 탐색의 검색 조건을 

두 수의 합이 음수 일 경우와 양수 일 경우, 그리고 0이 될 경우를 나누어 볼 수 있음을 발견.

두 수의 합이 음수 일 경우, mid 값으로 설정된 원소보다 큰 수들에서 0이 되는 값을 찾아야 되고

두 수의 합이 양수 일 경우, mid 값으로 설정된 원소보다 작은 수들에서 0이 되는 값을 찾아야 되며 

두 수의 합이 0일 경우, 탐색을 종료하는 조건으로 찾게 되면

이분 탐색으로 0에 가장 근접한 순간의 조합을 알 수 있게 된다.

#include <cstdlib> 					// 정수 타입의 절대값을 구할 때 사용하는 라이브러리
#include <cmath>					// float, double 타입의 절대값을 구할 때 사용하는 라이브러리

vector<int> in;
int L, R, mid;
int res= 200000001, resA, resB;

sort(in.begin(), in.end());			// 이분 탐색은 탐색 전 오름차순으로 정렬해줘야 한다.

for(int i= 0; i< N-1; i++)
{
	L= i +1;
	R= N -1;
	while(L<= R)
	{
		mid= (L+R)/2;
		sum= in[i]+ in[mid];
		if(sum < 0) L= mid +1; 		// 두 수의 합이 0보다 작을 경우, mid로 선정된 값 보다
									// 더 큰 수를 넣어야 0에 가까워 질 수 있으므로 
		else if(sum > 0) R= mid -1; // 두 수의 합이 0보다 클 경우, mid로 선정된 값 보다
									// 작은 수를 넣어야 0에 가까워 질 수 있으므로
		else						// 두 수의 합이 0일 경우, 그대로 탐색을 종료해도 된다.
		{
			res= 0;
			resA= i;
			resB= mid;
			break;
		}
									// sum 과 res의 절대값을 비교하여 더 작은 쪽이 0보다 가까우므로
									// abs() 절대값을 씌워 비교한다.
		if(abs(sum) < abs(res))		// 두 수의 합이 현재 0에서 가장 가까운 값보다 작을 경우
		{							// 새롭게 갱신하는 알고리즘
			res= sum;				// sum이 새롭게 나올때 마다 비교를 해주지 않아 한번 FAIL했었다.
			resA= i;
			resB= mid;
		}
	}
}

* 매번 0보다 작은지 확인하는 루프를 적용하지 않아 여러번 FAIL 났었다. 

위와 같은 알고리즘으로 이분 탐색의 조건을 변형하여 O(NlogN)의 탐색시간으로 

탐색할 조합의 수를 줄여 시간초과를 막고 PASS를 받을 수 있었다.

```

### 0053. BOJ 10816 숫자 카드2. S4
:page_with_curl: https://www.acmicpc.net/problem/10816

```
N개의 정수들로 이루어진 집합에서 질문으로 들어오는 수의 갯수를 출력하는 문제.

단, 정수의 갯수는 최대 50만, 정수의 범위는 -1억 ~ 1억까지 이므로 int[]로 갯수를 세거나

완전탐색으로 카운팅을 할 경우, 시간 초과.

i) Map STL을 이용하여 중복되는 수를 Counting 하여 출력하여 해결.

#include <map>

map<int, int> in;

int N, M, t;

cin >> N;
for(int i= 0; i< N; i++)
{
	cin >> t;
	if(in.find(t)!=in.end())	// Map 자료구조에서 key 값이 t인 노드를 찾을 경우
		in[t]++;				// 갯수 역할을 할 Value 값 ++
	else						// 찾지 못했을 경우, map.find()는 in.end()를 return한다.
		in.insert({t, 1});		// pair를 넣어주면 된다. map.insert({Key, Value}) 의 방식
}

cin >> M;
for(int i= 0; i< M; i++)
{
	cin >> t;
	if(in.find(t)!= in.end())
		cout << in[t];
	else
		cout << "0";
	cout << " ";
}

위와 같이 구현, O(NlogN), 사용 메모리 25520KB, 소요 시간 596ms

ii) 이분 탐색을 이용하여 입력 받은 수를 Counting, 이분 탐색을 또 이용하여 질문으로 받는 수의 갯수 출력

#include <vector>
#include <algorithm>

vector<int> befIn;			// 수의 갯수를 세기 전 정렬을 위해 입력 받기 위한 전처리 배열
vector<pair<int, int>> in;	// 수의 갯수를 저장하기 위한 배열

int N, M, t, L, R, mid;

// Input Session
cin >> N;
for(int i= 0; i< N; i++)
{
	cin >> t;
	befIn.push_back(t);
}

sort(befIn.begin(), befIn.end());

// Counting Session
for(int i= 0; i< N; i++)
{
	bool find= false;
	L= 0;
	R= in.size() -1;
	while(L<= R)
	{
		mid= (L+R)/2;
		if(befIn[i]< in[mid].first) R= mid -1;
		else if(befIn[i] > in[mid].first) L= mid +1;
		else
		{
			in[mid].second++;
			find= true;
			break;
		}
	}
	
	if(!find)
		in.push_back({befIn[i], 1});
}

// Print Session
cin >> M;
for(int i= 0; i< M; i++)
{
	cin >> t;
	bool find= false;
	L= 0; 
	R= in.size() -1;
	while(L<= R)
	{
		mid= (L+R)/2;
		if(t < in[mid].first) R= mid -1;
		else if(t > in[mid].second) L= mid +1;
		else
		{
			cout << in[mid].second;
			find= true;
			break;
		}
	}

	if(!find)
		cout << "0";
	cout << " ";
}
cout << "\n";

위와 같이 구현, O(N + logN + logN) == O(N), 사용 메모리 10348KB, 소요 시간 260ms

두 구현 모두 PASS
```