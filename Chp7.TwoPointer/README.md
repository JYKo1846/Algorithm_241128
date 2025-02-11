# Chapter 7. 투 포인터
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

왼쪽 인덱스와 오른쪽 인덱스의 위치를 바꾸며 원하는 값을 찾는 문제이다. Big-O = O(N)

i) i 고정
ii) [i:j] 값 계산
iii-1) [i:j] 값이 탐색 값 M보다 작을 경우, j++하여 탐색값과 같거나 큰지 확인하여야 함
iii-2) [i:j] 값이 M보다 클 경우, 이후 j++하여 탐색하는것에 의미가 없음. 이미 탐색 값을 초과 했으므로.
따라서, i++하여 다음 탐색을 진행해야 함.
iii-3) [i:j] 값이 M과 같을 경우, 정답. 이후 i++하여 새로운 탐색을 진행해야 함.

위와 같은 식으로 두개의 인덱스를 사용하여 값을 탐색하는 방법. 

!!! 모든 이분 탐색과 투 포인터 문제가 호환되는 것이 아니다 !!!

그리고, 항상!!! 투 포인터 문제는 left index & right index 범위를 항상 유의 해야 한다!!!

### 0063. BOJ 1806 부분합. G4  
:page_with_curl: https://www.acmicpc.net/problem/1806

```
10000 이하의 자연수로 이루어진 길이 N의 수열. 이 수열에서 연속되는 수들의 부분합 중 그 합이 S 이상 되는 부분 중

가장 짧은 길이를 출력하는 문제.

수를 정렬하여 확인했을 때, i ~ j 까지의 합은 i+1 ~ j 값보다 클 것이다. 자연수들의 합에서 한 수를 뺐으므로.

따라서, i+1 부터 새로이 탐색을 시작할 때, i+2 , i+3, ...을 할 필요는 없다. 따라서 이 문제는 투 포인터 문제로

index Right를 오른쪽으로 계속 이동시키도록 구현하면 소요 시간을 줄일 수 있는 문제이다.

int idxR= 0;
int sum= in[0];
int tmpLen= 1;
int ansLen= 20000005;
for(i= 0; i< N; i++)
{
	while(sum < S && idxR < N-1)
		sum+= in[++idxR];
	if(sum >= S)
	{
		tmpLen = idxR- i + 1;
		ansLen = ansLen < tmpLen ? ansLen : tmpLen;
	}
	sum -= in[i];
}

위와 같은 투 포인터 구현으로, PASS. 소요 메모리 2412KB, 소요 시간 8ms, Big-O : O(NlogN)

탐색 완료 후, 투 포인터 중 index Left를 +1 시키므로, 그에 따라 sum 에서도 in[i] 를 빼는 것이다.

```

### 0064. BOJ 2230 수 고르기. G5  
:page_with_curl: https://www.acmicpc.net/problem/2230

```
길이 N의 정수 수열에서 두 수를 선택, 두 수의 차가 M보다 큰 최소의 값을 구하는 문제.

정렬된 수열에서 두 수를 선택, 두 수의 차 X가 M보다 작을 경우 더 작아지면 안되고, 더 커져야 함.

반대로 X가 M보다 클 경우, 모두 정답이 되지만 그 중 최소값을 찾는 문제이다.

따라서, 이 문제는 이분 탐색으로 풀 수 있는 문제이다. 또한, 두 수 i, j를 선택하여 M을 만족하는 값을 

찾았을 때, i를 이동시키게 되면 j 이전의 값 j-1, j-2는 i+1과 비교할 이유가 없다. 이미 답이 되지

않음을 확인할 수 있기 때문. 따라서, 투 포인터 알고리즘으로도 해결이 가능한 문제이다.

i) 이분 탐색으로 구현

for(i= 0; i< N; i++)
{
	L= i; R= N-1;
	while(L<=R)
	{
		mid= (L+R)/2;
		tmpAns= in[mid]- in[i];
		if(tmpAns < M)
			L= mid + 1;
		else
		{
			R= mid - 1;
			ans= ans < tmpAns ? ans : tmpAns;
		}
	}
}

위와 같이, i를 고정 & mid 값을 변경하는 알고리즘으로 구현하였다.

i) 두 수의 차 X가 M 보다 작을 경우, X를 증가시켜야 한다. 그럴 경우, mid를 증가시켜야 함. L= mid +1;

ii) X가 M보다 클 경우, X를 감소 시켜야 한다. R= mid -1; 그리고, 그 중 답이 있을 수 있으므로 ans 갱신

이렇게 구현할 경우, 소요 메모리 2912KB, 소요 시간 24ms, Big-O : O(NlogN)


ii) 투 포인터로 구현

int idxR= 0;
ans= in[N-1] - in[0];

for(i= 0; i< N; i++)
{
	while(tmpAns< M  && idxR < N -1 )
		idxR++;
	int tmpAns= in[idxR]- in[i];
	if(tmpAns>= M)
		ans= ans < tmpAns ? ans : tmpAns;
}

위와 같은 방식으로, i : 0 ~ N-1이 될 때 까지, R을 증가시키며 M 이상 차이가 나는 경우가 나올 경우,

ans와 비교& 갱신, R은 이전 값을 볼 필요가 없으므로 for 루프에서 유지시키며 탐색을 이어가게 된다.

그렇게 연산 과정을 생략하여서 시간을 소요하게 된다.

소요 메모리 2912KB, 소요 시간 16ms, Big-O : O(NlogN)

투 포인터 알고리즘은 O(N) 이지만, 정렬 알고리즘의 Big-O가 O(NlogN) 이므로 위와 같은 Big-O가 된다.
```

### 0065. BOJ 12891 DNA 비밀번호. S2  
:page_with_curl: https://www.acmicpc.net/problem/12891

```
길이 S의 문자열에서 길이가 P인 부분 문자열 중 정해진 A,C,G,T의 수만큼 나오는 경우의 수 갯수 출력

입력받는 문자열 in의 [0]번째 인덱스 부터 [P-1]까지의 인덱스 배열에서 A,C,G,T의 수를 세고,

[0]번째에 나왔던 알파벳을 제거, [P]번째 인덱스의 알파벳을 추가 후, 조건에 맞는지 확인하도록 하면,

매번 알파벳 수를 셀 필요 없이 O(N)만에 경우의 수를 모두 확인 할 수 있다.

이 문제를 풀 때, 놓치지 말아야 할 부분은 2가지가 있다.

i) int 함수를 return 시킬 때, 조건문이 만족할 때만 return 시킬 경우를 조심해라! 조건문 만족하지

않을때도 꼭 return 시킬 수 있도록 유의 하기.

ii) sequence[i] == qualAlpha[i] 이런 식으로 조건 알파벳 수와 현재 알파벳 수를 비교할 수도 있고,

int baseToIndex(char alp)
{
	if(alp =='A') return 0; 
	else if(alp == 'C') return 1;
	else if(alp == 'G') return 2;
	...
}

이런 식으로 구현하면 좀 더 코드를 가독성 있게 작성할 수 있다.

위와 같이 구현 시, 소요 메모리 3680KB, 소요 시간 16ms Big-O : O(N)

```

### 0066. BOJ 2118 두개의 탑. G5  
:page_with_curl: https://www.acmicpc.net/problem/2118

```
환형 배열에서 가장 멀리 떨어져 있는 두 지점을 선택 했을 때의 값을 출력하는 문제.

환형 배열에서 두 지점을 선택했을 때 거리는, 시계 방향 거리, 반시계 방향 거리 중 더 짧은 거리가

두 지점 사이의 거리가 된다. 이때, 누적합과 이분 탐색으로 구현할 수 있지만,

투 포인터로 해결하였음. 두 지점 사이의 거리가 최대가 되는 지점은 반시계 방향 거리가 최대가 되는,

반시계 방향 거리가 시계 방향 거리보다 커지는 시점의 거리가 가장 크다. 

따라서, 각 지점 circle[i]에 대해 반시계 방향 거리가 시계 방향 거리보다 커지는 시점까지

각 지점을 지나며 값을 더한다. 그 후, 현재의 답과 비교하여 더 큰 값을 저장한다.

그리고, circle[i]를 하나씩 이동 시키면, 탐색 지점 역시 한 칸 이동시키며 거리를 일일이 계산할 

필요 없이 각 지점 별 거리만 뺴고 더하면 최대값을 모두 탐색 할 수 있다.

for(int i= 0; i< N; i++)
	{
		while(tmpLeft < tot - tmpLeft)
		{
			tmpLeft+= in[idxR];
			idxR= (idxR+1) % N;
		}
		
		ans= ans > tot - tmpLeft ? ans : tot - tmpLeft;
		tmpLeft -= in[i];
	}

위와 같은 구현으로 통과하였음. 소요 메모리 2216KB, 소요 시간 4ms, Big-O O(N) 이 된다.
```

