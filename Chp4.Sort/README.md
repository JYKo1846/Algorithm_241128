# Chapter 4. 정렬 
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

### 0030. BOJ 1181 단어 정렬. S5
:page_with_curl: https://www.acmicpc.net/problem/1181

```
길이가 짧은 순으로 정렬 & 길이가 같을 경우, 사전 순으로 정렬하도록 하는 문제.

C++의 vector.h + algorithm.h 사용하여 정렬하도록 구현하였음.

bool comp(string a, string b)		// true가 되는 조건이 더 앞에 정렬되도록 한다.
{
	if(a.size() == b.size())
		return a < b;
	return a.size() < b.size();
}

sort(vec.begin(), vec.end(), comp);	// sort(vector start_p, vector end_p, comp)

```

### 0031. BOJ 10814 나이순 정렬. S5
:page_with_curl: https://www.acmicpc.net/problem/10814

```
회원들의 나이와 이름이 주어진다. 나이가 증가하는 순으로 정렬하되, 나이가 같을 경우 먼저 가입한 순서대로 정렬하는 문제.

C++의 vector.h 와 algorithm.h 사용하여 구현하였음.

vector<pair<int, pair<string, int>>> a;		// vector<가입 순서, 회원 이름, 나이>
	
bool comp(pair<int, pair<string, int>> a, pair<int, pair<string, int>> b)
{
	if(a.second.second == b.second.second)
		return a.first < b.first;
	return a.second.second < b.second.second;
}
```

### 0032. BOJ 7785 회사에 있는 사람. S5
:page_with_curl: https://www.acmicpc.net/problem/7785

```
회사에 들어오는 사람과 나가는 사람을 기록할 때, 회사에 남아 있는 사람들을 출력하는 문제.

처음 구현은 0031번 문제와 같이 vector<pair<pair>>사용하여 구현하였으나 시간 초과.

C++의 Map STL 사용하여 자동 정렬 & 삽입, 삭제 기능 사용하여 구현.

Item 과 Key 값을 한 요소로 가지며 map_val->first 가 키 값으로 할당, 이진 트리의 오름 차순으로 정렬되도록 되어 있음.

내림 차순으로 정렬을 원할 경우, map<string, int, greater<원하는 데이터 타입>> 으로 선언시 내림 차순 가능.

탐색, 삽입, 삭제 모두 $Big-O$ : $(logN)$ 으로 구현되어 있음.

map 으로 회사원들을 기록하고, 문자열을 파싱하여 enter시 map에 삽입, leave시 erase 하도록 구현, PASS
```

### 0033. BOJ 1302 베스트셀러. S4
:page_with_curl: https://www.acmicpc.net/problem/1302

```
입력이 N개 주어진다. 오늘 팔린 책의 이름이 주어질 때, 오늘 가장 많이 팔린 책의 이름을 출력하는 문제.

C++의 Map.h를 사용하여, 입력 받는 책이 map_Var에 있는지 탐색 -> 있을 경우, var[책_이름]++로 var->second++;
없을 경우, map_Var.insert({책_이름, 1});으로 요소 삽입하여

Iterator를 사용하여 map 데이터 구조 내부 모든 요소 탐색 & 가장 많이 팔린 책의 이름을 출력도록 구현 , PASS
```

### 0034. BOJ 18870 좌표 압축. S2
:page_with_curl: https://www.acmicpc.net/problem/18870

```   
입력으로 각 좌표의 위치가 -10^9 ~ 10^9 까지 주어진다.

이때, 자기 자신보다 작은 좌표가 몇개 있는지 모든 좌표에 대해 출력하도록 하는 문제.

- 1번째 시도 => FAIL

vector.h 를 사용하여, 2가지 벡터를 생성. 하나는 원본, 하나는 정렬을 위함.

원본의 각 원소들을 탐색하며, 정렬된 벡터에서 자기 자신이 나올때까지 나오는 작은 수를 세 출력하고자 했으나

시간 초과에 걸림. 사유 : 좌표의 범위가 최대 -1억 ~ 1억 이므로.

- 2번째 시도 => PASS

첫번째 시도에서 구현한 것 + 시간을 더 줄일 수 있는 방법은 unique() 함수 사용

unique(vec.begin(), vec.end()) : 중복되지 않는 원소들을 맨 앞부터 채워 넣는다.

기존 벡터에 남는 공간은 기존의 데이터를 유지하게 된다.

그것을 없애고, 중복 없는 원소들만 남기고자 할 경우,

vec.erase(unique(vec.begin(), vec.end()), vec.end); 를 사용하여

중복 없는 벡터 값만 가지도록 한다.

그 이후, 시간을 줄일 수 있는 또 다른 방법으로

lower_bound(vec.begin(), vec.end(), val) 를 사용하였다.

lower_bound()의 경우, 이진 탐색으로 val 값보다 크거나 같은 원소의 위치 iterator를 반환한다.

단, 위 함수를 사용하기 위해선 오름차순으로 정렬되어 있어야 한다.

따라서, unique 함수와 lower_bound 함수를 사용하여 아래와 같이 구현,

중복되지 않은, 자기 자신보다 작은 수의 갯수를 lower_bound의 반환값 위치로 알 수 있으므로

해당 위치를 출력하도록 하여 문제에서 요구하는 답을 출력하도록 구현 하였음. => PASS

sort(s_vec.begin(), s_vec.end());
s_vec.erase(unique(s_vec.begin(), s_vec.end()), s_vec.end());

for(i= 0; i< vec.size(); i++)
{
	auto iter= lower_bound(s_vec.begin(), s_vec.end(), vec[i]);
	cout << iter - s_vec.begin() << " ";
}

lower_bound(begin(), end(), vec[i]) - vec.begin(); 의 경우, 해당 요소의 인덱스값을 출력하는 문장이다.
```

### 0035. BOJ 2910 빈도 정렬. S3
:page_with_curl: https://www.acmicpc.net/problem/2910

```
입력받은 수를 정렬한다. 정렬하되, 입력된 빈도수가 높은 순으로 출력한다. 만약 빈도수가 같을 경우, 먼저 입력된 순서대로 출력한다.

세가지의 정보를 저장해야 한다. 입력받은 수, 입력된 횟수, 처음 입력된 위치.

따라서, tuple 자료 구조와 정렬을 위해 vector를 같이 사용하도록 하였다.

vector<tuple<long long, int, int>> 	// long long : 입력값, int : 빈도 수, int : 처음 입력 위치

bool comp(tuple<long long, int, int> a, tuple<long long, int, int> b)
{
	if(get<1>(a) == get<1>(b))
		return get<2>(a) < get<2>(b);
	return get<1>(a) > get<1>(b);
}

cin >> X;
for(i= 0; i< vec.size(); i++)
{
	if(X== get<0>(vec[i]))
	{
		get<1>(vec[i])++;;
		flg= true;
		break;
	}
	if(!flg)
		vec.push_back(make_tuple({X, 1, i});
}

sort(vec.begin(), vec.end(), comp);

for(i= 0; i< vec.size(); i++)
{
	for(j= 0; j< get<1>(vec[i]); j++)
		cout << get<0>(vec[i]) << " ";
}

위와 같은 코드로 구현 & PASS 하였다.
```

### 0036. BOJ 1931 회의실 배정. S1
:page_with_curl: https://www.acmicpc.net/problem/1931

```
회의실을 이용하기 위해, 시작 시간과 종료 시간을 N개의 입력으로 준다. 1<= N <= 10만

이때, 열릴 수 있는 최대의 회의 갯수는 몇개인지 알아내는 문제이다.

모든 경우의 수를 따질 경우, N! 경우의 수가 나올 수 있다.

하지만, N이 최대 10만 이므로 N!의 경우의 수는 무조건 시간 초과가 나기 때문에 답이 될 수 없다.

그리디 알고리즘으로 구현해야 되는 문제이다.

1) 시작 시간으로 정렬하여 배치할 경우, 2) 회의 시간이 짧은 순으로 정렬할 경우, 두 경우 모두 정답이 아닌 경우가 있다.

마지막으로, 3) 끝나는 시간으로 정렬할 경우로 구현 할 때, 추가 조건으로 끝나는 시간이 같을 경우 시작 시간이 빠른 회의부터

배치하면 최적의 알고리즘이 될 것이다.

그리디 알고리즘의 경우, 항상 알고리즘의 타당성을 확인해야 한다. 예제의 경우와, 끝나는 시간이 같을 경우,

시작과 끝이 같은 회의가 입력으로 같이 들어올 경우 모두 만족하므로 해당 알고리즘으로 구현, 정렬하면 PASS가 된다.
```

### 0037. BOJ 2745 진법 변환. B2
:page_with_curl: https://www.acmicpc.net/problem/2745

```
B진법 수 N이 주어진다. 이 수를 10진법 수로 바꿔서 출력하는 문제.

입력값을 Vector 컨테이너에 넣어 0번째 인덱스부터 B^(vec.size()- (idx+1))값을 연산하여

알파벳일 경우, 아스키 값을 차감하여 계산, 정수일 경우 그냥 계산하여 모두 합산& 출력함.

PASS
```

### 0038. BOJ 1233 주사위. B2
:page_with_curl: https://www.acmicpc.net/problem/1233

```
3개의 주사위를 굴려 나온 수들의 합 갯수를 구하는 문제. 그 중, 가장 많이 나오는 합을 출력하는 문제.

int 배열을 0 ~ 80 가 나오는 횟수를 저장하는 목적으로 선언.

3중 for문으로 나올 수 있는 모든 조합의 수 갯수를 위의 배열에 저장 & 탐색 for문으로 O(N)의 시간에 걸쳐

최다 갯수의 조합 수를 출력하도록 구현 & PASS

```

### 0039. BOJ 1110 더하기 사이클. B1
:page_with_curl: https://www.acmicpc.net/problem/1110

```
2자리 수를 입력 받는다. 2자리 수의 오른쪽 수 를 십의 자리수, 입력값의 각 자리 수를 더한 값의 오른쪽 값을 1의 자리수로 하여

새로운 조합수를 만들 때, 처음 입력받은 2자리수 로 돌아오는데 걸리는 순환 횟수를 출력하는 문제.

문제에서 요구한 대로 오른쪽 자리수를 구하기 위해 %10을 하여 다시 원복되는데 까지 걸리는 순환 횟수를

완전 구현하여 해결 &  PASS
```

### 0040. BOJ 1431 시리얼 번호. S3
:page_with_curl: https://www.acmicpc.net/problem/1431

```
정렬 문제. 1. 길이가 짧은 순으로 정렬. 2. 길이가 같을 경우, 문자열에 들어있는 숫자의 총합이 적은 순으로 정렬

3. 총합 마저 같을 경우 혹은 두 조건에 만족하지 않는 경우, 사전순으로 정렬한다.

위 3가지 조건을 sort(vec.begin(), vec.end(), comp)에 들어가는 bool comp() 함수 구현에 적용하여

해결 & PASS
```

### 0041. BOJ 18310 안테나. S3
:page_with_curl: https://www.acmicpc.net/problem/18310

```
1 ~ 10만 사이의 집의 위치가 주어질 때, 한 집을 정해 안테나를 세우게 된다.

이때, 안테나와 모든 집들과의 거리 총합이 제일 적은 곳에 안테나를 설치하려 할 때,

해당 위치를 출력하는 문제. 특이 사항 : 제한 시간이 1초.

1번째 시도. 모든 집에 안테나를 세웠을 때 총합을 구하는 것으로 생각

=> O(N*N), O(N^2) 의 알고리즘으로 최악의 경우, 10만 * 10만 시간초과 될것으로 생각

하지만 구현하였으나 역시 시간 초과

2번째 시도. 모든 집들의 위치를 합산, 평균내어 해당 평균값에서 가장 가까운 집 순으로 정렬

가장 가까운 집이 정답이 되지 않을까 생각함. => FAIL

ex) 5
1 7 8 9 10 의 경우, 2번째 알고리즘으로 도출되는 정답은 7. 하지만 정답은 8임.

3번째 시도. 중앙값을 적용. 입력받은 수들을 오름차순으로 정렬 후,
홀수개의 원소일 경우, 가운데 있는 수 (ex: 5일 경우, 3 / 7일 경우, 4)
짝수개의 원소일 경우, 가운데의 수 -1 ( ex: 4일 경우, 2-1= 1/ 6일 경우, 3-1= 2)
해당 위치의 수를 답으로 출력할 수 있도록 중앙값과 거리가 가까운 원소 순서대로 정렬 & 맨 앞 값 출력하도록 구현

=> PASS

* 중앙값의 개념 :

모든 데이터를 크기 순으로 정렬하여 가운데 순서에 있는 데이터를 말함. ( 가운데 순서의 데이터가 둘이라면 두 수의 평균)

데이터의 반은 중앙값 보다 작고, 나머지 반은 중앙값보다 클 것임.

* 최빈값의 개념 :

가장 많이 나타나는 값. 해당 배열에서 가장 많이 출현하는 수를 최빈 값이라 함.

```
