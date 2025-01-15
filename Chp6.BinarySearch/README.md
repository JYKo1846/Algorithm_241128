# Chapter 6. 이분탐색 
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐



"정렬"되어있는 집합에서 원하는 값을 찾는 효율적인 탐색 방법

임의의 값과 원하는 값을 비교하여 탐색범위를 줄일 수 있다.

M을 [L:R] 사이의 중앙값 ((L+R)/2의 인덱스에 있는 값)으로 지정하여 조사 범위를 반으로 줄여가며

탐색하는 방법.


* 이분 탐색의 응용 Parametic Search 매개변수 탐색

이분 탐색으로 최적값을 찾는 탐색 기법

연속적 또는 이산적인 값의 집합에서 X를 경계로 조건을 만족하는 집단 & 답이 될 수 없는 집합을 이분적으로

판정할 수 있을 시 사용 가능.

모든 A에 대해 탐색하지 않고 최적값 X를 기준으로 판정 기준을 나눌 수 있다면 이분 탐색 적용 가능.

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
N개의 정수들로 이루어진 집합에서 질문으로 들어오는 M개의 수의 갯수를 출력하는 문제.

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

iii) 이분 탐색과 Lower_bound & Upper_bound를 활용하여 갯수를 탐색하는 방법이 있다.
lower_bound : X 값 "이상"의 값이 처음 나오는 위치
upper_bound : X 값 "초과"의 값이 처음 나오는 위치

갯수를 셀 때, upper_bound index - lower_bound index = X의 갯수가 나올 수 있다.

만약, 찾는 수가 없을 경우 lower_bound 와 upper_bound의 값이 서로 같게 되어 갯수가 0이 된다. (문제 없음)

Lower_bound & Upper_bound 를 찾을 땐, 이분 탐색과 비슷하게 mid 값을 설정하여 찾으면 되지만 이분 탐색과 다른 점은

찾는 값과 중앙값이 같을 경우는 처리하지 않는 것에 있다!

int findLowerBound(int val)
{
	int L, R, val, lowerBoundIndex;
	L= 0;
	R= in.size() -1;
	lowerBoundIndex= in.size();

	while(L<= R)
	{
		mid= (L+R)/2;				// 중앙값 탐색
		if(in[mid]< val) L= mid +1;	// 찾고자 하는 값보다 작은 수들은 탐색할 필요 X
		else						// 값보다 같거나 클 경우 거기에 lowerBound가 있을
		{							// 가능성이 있으므로
			R= mid -1;				// while문 종료 & 탐색범위의 축소를 위해
			lowerBoundIndex= mid;	// 정확히 찾을 경우 여기서 lowerBoundIndex가 갱신될 것
		}							// lowerBoundIndex는 작은 값으로 갱신 될 것이므로 비교 X
	}
	return lowerBoundIndex;
}

int findUpperBound(int val)
{
	int L, R, mid, upperBoundIndex;
	L= 0;
	R= in.size();
	upperBoundIndex= in.size();

	while(L<= R)
	{
		mid= (L+R)/2;
		if(in[mid]<= val) L= mid +1;	// 초과 값을 찾는 것이므로 val과 같은 값을 찾을 경우 한칸 오른쪽 이동
		else							// 찾고자 하는 값보다 클 경우 그것이 답이 될 수도 있다.
		{								
			R= mid -1;					// while문 종료 & 탐색 범위 축소
			upperBoundIndex= mid;		// 해당 값이 정답일 수도 있으므로 mid 값 저장
		}
	}
	return upperBoundIndex;
}

위 구현의 경우, 수행 시간은 O(M(logN+ logN)) == O(MlogN), 사용 메모리 5224KB, 소요 시간 300ms 

세 구현 모두 PASS
```

### 0054. BOJ 2417 정수의 제곱근. S4
:page_with_curl: https://www.acmicpc.net/problem/2417

```
이분 탐색의 응용으로 매개 변수 탐색을 사용하는 문제.

unsigned long long 범위의 정수 N을 입력 받았을 때, N보다 큰 정수 중 가장 작은 정수를 출력하는 문제.

20을 예로 들게 되면, 

1, 2, 3, 4는 거짓 . 5, 6, 7, 8 부터 참이 된다. 

위와 같이 최적값 5를 기준으로 참 거짓을 알 수 있으므로 이분 탐색 적용 가능!

이분 탐색을 적용하려면 정렬해야 하지만, L을 1부터 차츰 오름차순으로 올리므로 정렬이 이미 되어있다고 생각할 수 있음!

unsigned long long N, L, R, mid, ans, val;

cin >> N;
L= 1;
R= 1ULL << 32;

while(L<= R)
{
	mid= (L+R)/2;
	val= mid * mid;
	if(val < N) L= mid +1;		// mid 이하의 값은 모두 최적의 값이 아닌게 판명났으므로 판정 X
	else						// N보다 큰 제곱 수 중 가장 작은 수를 찾기 위한 조건문
	{
		R= mid -1;				// mid 값보다 큰 수 또는 최적의 해가 될 수도 있음
		ans= mid;				// 따라서 값을 ans에 넣고 R을 -1함으로써 종료 또는 최적의 해를 
	}							// 더 찾을 수 있음.
}

cout << ans << "\n";

return 0;

위와 같은 구현으로, 0.4초 제한시간에 0ms 수행 시간으로 PASS

```

### 0055. BOJ 2805 나무 자르기. S2
:page_with_curl: https://www.acmicpc.net/problem/2805

```
이분 탐색의 응용으로 매개 변수 탐색을 사용하는 문제.

입력으로 받는 N개의 정수에 대해 어떠한 수 X를 뺐을 때, M의 값 이상으로 얻을 수 있는 수를 알아내는 문제이다.

그 수 중 가장 최대값을 출력하는 문제이다. 

시간 제한은 1초, N은 최대 100만개 까지 되므로 X에 일일이 0 ~ 최대 나무 길이까지 대입시 시간 초과가 자명하다.

또한, 입력받는 정수의 범위는 최대 10억이다.

최적의 빼는 값 X를 기준으로 X보다 작아질수록 조건을 만족하게 될 것이고,

X보다 커지면 조건을 불만족하게 될 것이다.

이 X값을 기준으로 PASS 와 FAIL이 나뉘므로 이분 탐색이 가능하다. 이분 탐색을 통해 수행 시간을 단축시킬 수 있다.

그리고 문제의 아이디어가 헷갈리므로 적어가면서 진행하였다.

tot= X를 뺀 이후 가져갈 수 있는 수 
( 각 나무의 길이는 최대 10억이므로 Worst Case 10억 * 100만으로 int type은 Overflow => long long type으로 저장 )

toCut= X 값, (L+R)/2 로 이분 탐색 방식으로 찾을 것이다.

L= 0 (이분 탐색의 왼쪽 기준, 0부터 탐색하여 X==0일때 정답이 되는 경우도 탐색할 수 있도록 구현)

R= N개의 정수 중 가장 큰 수 max_t ( 입력 받은 정수 중 가장 큰 정수를 대입하여 0 ~ 100만까지의 탐색에서 줄이기 위함)

그리고, tot가 커질수록 (L+R)/2 즉 toCut의 값은 작은 것이다. 하지만 문제는 toCut중 최대값을 원하므로

i) tot가 커질수록 toCut의 값을 늘려야 함을 알 수 있다.

ii) tot가 작을수록 toCut의 값이 너무 큰 것이기 때문에, toCut의 값을 줄여야 함을 알 수 있다.

위 두가지 아이디어를 종이에 적고 코딩을 시작 했기 때문에, 코딩 중 헷갈리지 않도록 하였다.

int N, M, H, toCut, max_t= -1;
long long tot;

cin >> N >> M;
for(int i= 0; i< N; i++)
{
	int t;
	cin >> t;
	in.push_back(t);
	max_t= max_t > t ? max_t : t;
}

int L, R;
L= 0;								// toCut의 값이 0일 경우도 따지기 위함.
R= max_t;

while(L<= R)
{
	toCut= (L+R)/2;
	for(int i= 0; i< in[i]; i++)	// 100만의 탐색을 logH만큼 시행했기 때문에 시간 초과 X
		if(in[i] > toCut) 
			tot+= (in[i]- toCut);
	if(tot >= M)					// tot가 M보다 크므로 tot를 줄여야 함. 이럴 경우,
	{
		L= toCut +1;				// toCut을 늘리기 위해 L값 toCut+1;
		H= toCut;					// 그리고, H는 toCut을 늘릴때 마다 점점 커질 것이므로 비교 연산 필요 X
	}
	else							// tot가 M보다 작으므로 tot를 늘려야 함. 이럴 경우,
		R= toCut -1;				// toCut을 줄이기 위해 R값 toCut -1;
}

cout << H << "\n"; 

위 처럼 구현 시 시간 복잡도 O(NlogH) , 메모리 사용 8292KB, 소요 시간 164ms 로 PASS하게 된다.

```

### 0056. BOJ 1654 랜선 만들기. S2
:page_with_curl: https://www.acmicpc.net/problem/1654

```
K개의 랜선을 길이 X로 나누어 N개의 랜선으로 만들어야 한다.

이때, 1<= K <= 10000 , 1<= N <= 100만이다. 랜선의 길이는 최대 2^31 -1

최적의 갯수 X개가 있을 경우, X보다 크면 모두 통과, 작으면 모두 실패.

위와 같은 조건일 경우 이분 탐색 ( 매개변수 탐색 ) 으로 구현 가능하다.

이분 탐색에서 매개변수 탐색을 사용할 때는 항상 조건을 글로 작성하여 헷갈리는 걸 없애고 시작한다.

i) 제작한 랜선 갯수 tot 가 N보다 작을 경우, tot를 늘려야 함 -> 잘라야 할 길이 toCut(X) 를 줄여야 함
=> R= toCut -1;

ii) tot가 N보다 클 경우, 답을 포함하며 tot를 줄여야 함 -> 잘라야 할 길이 toCut을 늘려서 최대 값을 찾아야 함.
=> L= toCut +1;
X= toCut; 이 될 것이고, 최대값이 갱신 될 것이므로 비교 연산은 필요 없다.

위와 같이 구현 했으나 2번 틀렸으며 수정 성공하여 PASS하였다.

- 틀린 이유 1) 랜선의 길이는 2^31 -1 가 될 수 있으므로 toCut을 구할 때 int 범위를 Overflow할 수 있다.

따라서, toCut Data type을 int -> long long으로 변경해야 한다. (L, R, tot 도 동일)

- 틀린 이유 2) 이분 탐색을 위한 초기값 L을 0 -> 1로 바꿔야 했음. 

랜선의 범위 길이가 1 ~ 2^31-1이고, X의 길이는 최소값이 1이 되기 때문이다. 0으로 해서 85%에서 FAIL했었음

int K, N;
long long toCut, max_l, X, L, R, tot;

L= 1;
R= max_l;
while(L<= R)
{
	toCut= (L+R)/2;
	if(toCut== 0) tot= K;
	else
		for(int i= 0; i< in.size(); i++) tot += in[i]/toCut;
	if(tot >= N) 
	{
		L= toCut+1;
		X= toCut;
	}
	else 
		R= toCut -1;
}

cout << X << "\n";


위와 같은 구현으로 사용 메모리 : 2288KB / 소요 시간 4ms

```

### 0057. BOJ 6236 용돈 관리. S1
:page_with_curl: https://www.acmicpc.net/problem/6236

```
N일동안 사용할 금액을 계산하는 것이다. M번만 인출해 N일 동안의 생활을 이어갈 수 있는 프로그램 구현하는 문제.

1번 인출에 K원 인출, 인출한 금액으로 하루 보내기 가능 시 그냥 사용, 불가능시 남은 금액은 다시 넣고

K원을 다시 인출하여 사용하도록 한다. 또, 남은 금액이 그 날 사용할 금액보다 클 경우 넣었다가 다시 뺄 수 있을 때

최소 K를 구하시오.

1<= N <= 100000 / 1<= M <= N / 1<= 금액 <= 10000

최적의 금액이 X일 때,
3가지 경우가 있을 수 있다.

1) X가 N일 중 하루의 금액을 채우지 못 할 경우 => 하루도 지낼 수 없음. 불가능
2) X가 M번 보다 적은 인출 횟수로 N일을 지낼 수 있을 경우 => M번을 따로 채우면 되므로 가능
3) X가 M번 보다 많은 인출 횟수로 N일을 지낼 수 있을 경우 => M을 줄이는 방법은 없으므로 불가능.

2,3번 조건만을 따지게 되면 X에 대해 M번보다 같거나 작은 횟수로 채울 경우 모두 PASS, M보다 작을 경우 FAIL이다

위의 조건을 이분 탐색에 맞게 작성하면 아래와 같이 작성할 수 있다.

i) 금액 X에 대해 M번 인출보다 작거나 같게 인출할 수 있으면 PASS. 단, 최소 X값이어야 하므로 X를 더 줄여야 한다.
R= cutVal -1;		// cutVal은 (L+R)/2 값이다.
X= cutVal;			// X값은 항상 보다 작은 값으로 갱신 될 것이므로 비교 연산 필요 X.

ii) 금액 X에 대해 M번 인출보다 많게 인출해야 된다면 FAIL. 그러므로 X를 늘려 더 적은 횟수로 인출할 수 있도록
해야 한다.
L= cutVal +1;

iii) 그리고, 최초 비교 금액을 구하기 위한 L값은 인출해도 하루를 지낼 수 없는 금액은 쓸모 없으므로 
L= N일을 지내야 하는 금액 중 가장 큰 값을 설정해야 한다.

위의 조건에 따라 아래와 같이 구현 할 수 있다.

int L, R, cutVal, remainVal, spentDay;

L= max_V; 			// N일을 지내야 하는 금액 중 가장 큰 값.
R= 1000000000;		// 나올 수 있는 금액 중 가장 큰 값.

while(L<= R)
{
	cutVal= (L+R)/2;		// 이분 탐색을 위한 중간 값 설정
	spentDay= 1;			// 첫째날부터 금액을 사용하기 위함
	remainVal= cutVal;		// 사용하기 전 남아있는 금액은 인출 금액
	for(int i= 0; i< in.size(); i++)	// 지낼 수 있는 일수를 계산하는 루프
	{
		if(in[i] > remainVal)
		{
			spentDay++;
			remainVal= cutVal - in[i];
		}
		else
			remainVal-= cutVal;
	}
	
	if(spentDay > M)
		L= cutVal +1;
	else
	{
		R= cutVal -1;
		X= cutVal;
	}
}

cout << X << "\n";

위와 같은 구현으로 PASS. 메모리 사용 2916KB , 소요 시간 12ms

```

### 0058. BOJ 2110 공유기. G4
:page_with_curl: https://www.acmicpc.net/problem/2110

```
N개의 집이 수직선 위에 있다. 각 집에 C개의 공유기를 설치하려고 한다.

이때 가장 인접한 두 공유기 간의 거리가 최대가 되도록 할 때,

할 수 있는 거리를 구하는 프로그램을 만드는 문제.

!! 가장 인접한 두 거리의 최대값 , 가장 먼 두 거리의 최소값 
=> 위와 같은 답을 요구할 경우, 매개변수 탐색 ( 이분탐색 ) 문제 99%다!!

조건을 무조건 만족하며 설치할 수 있도록

공유기 사이의 거리를 d 이상으로 배치하고 싶을 때,

i) C <= 배치 가능 갯수 일 경우, d가 답일 수 있다. 또한, d보다 큰 값이 될 수도 있기 때문에 더 넓은 값 조사
그리고, 정답이 될 거리는 항상 최대값으로 갱신 될 것이므로 비교 연산 필요 없이 ans에 갱신 시켜 저장하면 답이 된다.
L= dist + 1;
ans= dist;

ii) C > 배치 가능 갯수 일 경우, d가 답이 되지 못한다. d를 줄여 답을 찾아야 하기 때문에 더 좁은 값 조사
R= dist - 1;

위와 같은 조건을 가지고 매개변수 탐색 구현

int calcDist(int objDist)		// objDist 의 거리를 만족하며 설치 할 수 있는 갯수를 계산, 출력하는 함수
{
	int pastX= in[0];			// 첫번째 집에는 무조건 설치하는 것이 이익이므로 첫번째에 무조건 설치하도록
	int setupN= 1;				// 설정, 설치 갯수 1개로 초기화
	for(int i= 1; i< in.size(); i++)
	{
		if(in[i] - pastX >= objDist)	// 순서대로 설치해가며 거리에 맞게 설치할 수 있는지 확인하여
		{
			pastX= in[i];				// 가능할 경우, 해당 위치를 다음 계산에 사용 & 설치 갯수 증가
			setupN++;
		}
	}
	return setupN;
}


int L, R, dist, ans = -1;
L= 1;								// 최적의 거리를 찾는 것이므로 답이 없을 경우 0이지만, 무조건 있으므로 1
R= in.back() - in.front();			// vector STL을 사용할 경우, vector.begin(), vector.end()는
									// 각각, vector의 시작 주소, 끝 주소 + 1 을 return 하므로 값을 사용하는 것이 아니다.
									// 따라서, vector.front(), vector.back() 함수를 통해 각 끝 값을 return 받을 수 있다.
while(L<= R)
{
	dist= (L+R)/2; 					// 최적의 거리를 찾기 위해 값을 어림 잡아 설정, 점차 정밀화 하는 과정
	if(calcDist(dist)>= C)
	{
		L= dist + 1;				// 현재 dist값보다 큰 값이 될 수도 있으므로 +1 하여 더 탐색
		ans= dist;					// ans는 항상 최대값으로 갱신될 것이므로 비교 연산을 하지 않는다.
	}
	else
		R= dist - 1;				// 현재 dist값보다 작은 값이 되어야 하므로 -1 하여 더 탐색
}

cout << ans << "\n";				// 정답 출력

위와 같은 구현으로 PASS, 사용 메모리 3688KB, 소요 시간 32ms.
```

### 0059. BOJ 2512 예산. S2
:page_with_curl: https://www.acmicpc.net/problem/2512

```
N개의 예산 X과 T의 총 예산이 주어진다. 이때, T를 넘지 않는 최대로 배정할 수 있는 예산 Y를 배정하는 프로그램 만들기.

모든 도시에 주어지는 예산은 동일해야 하므로, 이분 탐색 중 매개변수 탐색을 사용하면 된다. (T를 넘지 않는 최대의 예산)

이때, 배정 예산을 초과 하지 않는 도시의 예산은 그대로 책정되지만, 초과하는 도시의 예산은 배정된 예산만큼만 사용할 수 있도록 한다.

위 조건으로 이분탐색에 이용하기 위한 R 한계값은 입력값중 가장 큰 값을 배정하여 탐색하도록 하였다. 

L 한계값의 경우, 예산의 최소 금액이 1이므로, 1부터 탐색하도록 구현하였다.

배정 예산을 책정하되, 최대가 되도록 만들어야 한다.

i) 배정 예산이 Y일때, 모든 도시에 주어지는 예산 총합이 T를 넘지 않을 경우 => Y가 최적이거나 더 큰 값이 정답일 수 있다.

=> Y를 더 증액하도록 L = 배정 예산 + 1; 그리고, 배정 예산은 항상 최대로 갱신될 것이므로 비교 연산은 필요 없을 것이다.

ii) 모든 도시에 주어지는 예산 총합이 T를 넘을 경우 => Y 보다 작은 값이 정답일 것이다. => Y를 감액 할 수 있도록 R= Y - 1;


int calcBud(int estBud)
{
	int totBud= 0;
	for(i= 0; i< in.size(); i++)
	{
		if(in[i]<= estBud)
			totBud+= in[i];
		else
			totBud+= estBud;
	}
	return totBud;
}

cin >> N;
for(i= 0; i< N; i++)
{
	int t;
	cin >> t;
	in.push_back(t);
	max_v= max_v > t ? max_v : t;
}

int L, R, Y, ansBud;
L= 1;
R= max_v;

while(L<= R)
{
	Y= (L + R)/2;
	if(calcBud(Y)<= T)
	{
		L = Y + 1;
		ansBud= Y;
	}
	else
		R = Y - 1;
}

cout << ansBud << "\n"

위와 같은 구현으로 사용 메모리 2160KB, 소요 시간 0ms 로 PASS 하였다.
```

### 0060. BOJ 2343 기타 레슨. S1
:page_with_curl: https://www.acmicpc.net/problem/2343   

```
기타 강의 영상을 블루레이로 만들어 판매하려 함. N개의 강의가 있고 순서가 바뀌면 안됨.

이때, 블루 레이 갯수를 최소화 하려고 한다. M개의 블루레이에 최소한의 용량이 들어갈 수 있도록

하는 프로그램을 만드는 문제.

강의의 수 N 1<= N <= 100,000 

블루 레이 갯수 M 1<= M <= N

이분 탐색 중 매개 변수 탐색을 이용하여 구현하였음

i) 최적의 용량 Y 일때, M개보다 많은 수의 블루레이가 생성될 경우, Y를 늘려 블루레이의 수가

줄어들 수 있도록 해야 한다. R= Y - 1;

ii) M보다 작거나 같은 수의 블루 레이가 생성 될 경우, Y를 줄여 최소의 블루레이의 용량 혹은

최적의 용량을 알아 낼 수 있다. L= Y + 1; ans_Y= Y;

위와 같은 조건으로 아래와 같이 이분 탐색을 구현 할 수 있다.

int calcBlu(int availCap)		// 설정 용량보다 큰 영상이 있을 경우
{								// 설정 용량이 작은 것이므로 부적절한 답
	int bluNum= 1;
	int remainCap= availCap;
	for(i= 0; i< in.size(); i++)
	{
		if(remainCap < in[i])
		{
			remainCap= availCap - in[i];	
			if(remainCap< 0) bluNum= 10005;	// bluNum이 나올 수 없는 답을 설정하여
			bluNum++;						// 답이 될 수 없도록 만듬.
		}									// 외의 경우, 다음 블루레이로 넘어가고
		else								// 블루레이의 갯수 증가
			remainCap-= in[i];
	}
	return bluNum;
}

int L, R, availCap, ansCap;
L= 1;
R= totCap; 		// 모든 영상 용량의 총합

while(L<= R)
{
	availCap= (L + R)/2;
	if(calcBlu(availCap)> M)
		L= availCap + 1;
	else
	{
		R= availCap - 1;
		ansCap= availCap;
	}
}

cout << ansCap << "\n";


두번 틀렸었던 이유

1) L= 1로 초기화 하지 않았음. 최소 용량은 1부터 탐색해야 하는데 범위 설정을 잘못 했음

2) calcBlu() 함수에서 설정 용량이 강의 영상보다 작을 경우의 예외 처리를 하지 않아 오답이었음

그래서 추가, PASS함.

위와 같은 구현으로 사용 메모리 2916KB, 소요 시간 8ms 로 PASS 하였다.
```

### 0061. BOJ 2792 보석 상자. S1
:page_with_curl: https://www.acmicpc.net/problem/2792

```
보석은 M가지 색상을 가지고, N개의 학생들에게 모두 나눠 주려고 한다.

단, 한 학생은 같은 색상의 보석만 가질 수 있다. 그리고, 0개를 받는 학생이 있을수도 있다.

이때, 한 학생이 받을 수 있는 보석 수를 최소로 나눌 수 있는 방법을 알아내는 프로그램을 만드시오.

학생들의 수 N 1<= N <= 1,000,000,000

색상의 수 M 1<= M <= 300,000

각 색상 별 보석 수 K 1<= K <= 1,000,000,000

이분 탐색 중 매개 변수 탐색을 통해 답을 알아 낼 수 있다.

최적의 보석 수를 X라 할때,

i) N 보다 더 많은 수의 학생에게 나눠줄 경우, X를 너무 작게 예상함. => X를 증가 시키기 위해 L= X + 1

ii) N보다 적거나 같은 수의 학생에게 나눠줄 경우, X를 더 키울 수 있거나 최적의 답. => X를 감소 or 정답으로 선정

=> R= X -1; ansNum= X;

위와 같은 조건으로 매개변수 탐색을 구현하면 아래와 같이 된다.

int calcStudent(int estNum)		// 보석 수를 정했을 때, 나눠 줄 수 있는 학생수 계산 함수
{
	int studentN= 0;
	for(i= 0; i< in.size(); i++)
	{
		studentN+= in[i] / estNum;	// (보석 수 / 보석 할당 수) 로 한 색상에 줄 수 있는 학생 수 계산
		if(in[i]%estNum != 0) studentN++;	// 할당 수 보다 적게 남았을 경우, 한 학생에게 나머지 주기.
	}
}

int L, R, estNum, ansNum;
L= 1;					// 최소 1개 부터
R= 100000005;			// 보석 할당 수를 확인 할 범위의 최대값은 한 색상의 보석의 최대 갯수 10억

while(L<= R)
{
	estNum = (L + R)/2;
	if(calcStudent(estNum)<= N)
	{
		R= estNum - 1;
		ansNum= estNum;		// ansNum은 R이 갱신될 때 마다 최솟값으로 갱신되므로 비교 연산이 필요 없게 된다.
	}
	else
		L= estNum + 1;
}

cout << ansNum <<"\n";

위와 같은 구현으로 사용 메모리 5220KB, 소요 시간 60ms 로 PASS하였다.
```

### 0062. BOJ 2143 두 배열의 합. G3
:page_with_curl: https://www.acmicpc.net/problem/2143

```
두 배열의 구간합의 합으로 값 T가 되는 경우의 수의 갯수를 출력하는 문제 이다.

이때, 값 T -1,000,000,000 <= T <= 1,000,000,000

배열 A의 길이 N 1 <= N <= 1000

배열 B의 길이 M 1 <= M <= 1000

각 배열의 원소는 최대 절대값 1,000,000 이다.

답이 한 가지의 경우도 없을 경우, 0 출력.

map을 사용해도 되지만, 이분 탐색을 이용해 구현하였다.

A와 B에서 나올 수 있는 구간 합을 모두 구한 뒤, lower_bound 와 upper_bound를 활용하여

각 구간합에서 나올 수 있는 수의 갯수를 센 후, T - A 구간합의 수 == B 의 구간합의 수 를

ans+= B 구간합의 수 로 저장하여 출력하도록 하였다.

int findLowerbound(vector<int> &vec, int X)
{
	int L, R, mid, ans= -1;
	L= 0; R= vec.size() -1;
	while(L<= R)
	{
		mid= (L + R)/2;
		if(in[mid] <= X)
		{
			L= mid + 1;
			ans= mid;
		}
		else
			R= mid - 1;
	}
	return ans;
}

int findUpperbound(vector<int> &vec, int X)
{
	int L, R, mid, ans= vec.size() -1;
	L= 0; R= vec.size() -1;
	while(L<= R)
	{
		mid= (L + R)/2;
		if(in[mid]< X)
			L= mid + 1;
		else
		{
			R= mid - 1;
			ans= mid;
		}
	}
	return ans;
}

위와 같은 방식으로 lower_bound & upper_bound를 설정했으나, 문제 22%에서 틀림

하지만, algorithm.h STL에서 제공하는 lower_bound, upper_bound를 사용하면

해결된다. 이유는 계속 찾는 중....

for(i= 0; i< N; i++)
{
	sum= A[i];
	combA.push_back(sum);

	for(j= i+ 1; j< N; j++)
	{
		sum+= A[j];
		combA.push_back(sum);
	}
}

for(i= 0; i< M; i++)
{
	sum= B[i];
	combB.push_back(sum);

	for(j= i+1; j< N; j++)
	{
		sum+= B[j];
		combB.push_back(sum);
	}
}

sort(combB.begin(), combB.end());

long long B_LB= 0, B_UB= 0, availTotNum= 0;
// 배열 B에서 나올 수 있는 T - combA[i] 값의 lower bound 와 upper_bound 를 저장
// 그리고, upper_bound - lower_bound 하면 배열 B에서 나올 수 있는 모든 조합의 수를
// 알 수 있게 된다. 그리고, 그 수들의 합은 availTotNum에 넣게 되므로 int 범위를 넘을 수도 있으므로 long long에 저장

for(i= 0; i< combA.size(); i++)
{
	int var= T - combA[i];
	availTotNum= (long long)(upper_bound(combB.begin(), combB.end(), var) - lower_bound(combB.begin(), combB.end(), var));
}

algorithm.h 에서 제공하는 lower_bound 와 upper_bound를 사용하여 갯수를 알아낼 경우

사용 메모리 8304KB, 소요 시간 116ms 로 문제를 PASS

```