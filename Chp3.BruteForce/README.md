# Chapter 3. 브루트포스 ( 완전 탐색 )
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

### 0020. BOJ 10448 유레카 이론. B1
:page_with_curl: https://www.acmicpc.net/problem/10448

```
어떠한 정수가 주어졌을 때, 세 개의 삼각수로 표현할 수 있는지 출력하는 문제. 제한 시간 1초.

1 과 3 과 6을 시작으로 만들 수 있는 삼각수를 연산하여, bool 배열[생성된_삼각수]에 저장.
그 후, 입력으로 정수가 들어왔을 때, bool 배열[해당_입력_수]가 true 인지 확인하여 출력하도록 구현하여 해결.

```

### 0021. BOJ 2309 일곱 난쟁이. B1
:page_with_curl: https://www.acmicpc.net/problem/2309

```
아홉개의 수가 주어질 때, 총합이 100이 되는 7개의 수의 정렬을 오름차순으로 출력하는 문제.

입력받는 모든 수를 합산, 2개의 수를 빼면서 100이 되는 경우를 찾아 출력. 이때,

C++ algorithm.h 의 sort()를 사용하여 오름차순으로 정렬&출력하여 해결
```

### 0022. BOJ 11005 진법 변환2. B1
:page_with_curl: https://www.acmicpc.net/problem/11005

```
10진법 수 N을 B진법으로 변환하여 출력하는 문제.
N은 10억보다 작은 수.

- 1번째 구현 => PASS
나머지 계산을 통해, 뒷자리부터 하나씩 진법_수로 바꿔 Vector에 저장.
계산 완료 후, Vector를 거꾸로 출력하여 변환 완료된 수를 출력하도록 구현.

void pushN(int a)
{
	if(a< 10) res.push_back('0'+ (char)a);
	else res.push_back('A'+ (char)(a-10));
	return ;
}	

while(N> X)
{
	pushN(N%X);
	N/= X;
}

- 2번째 구현 => PASS
변환코자 하는 수를 X, 입력 정수를 N이라 할 경우,
N= A*(X^i)+ B*(X^i-1)+ ... + Z*(X^0) 로 표현 할 수 있다.

따라서, 
tN= N;
while(tN!= 0)
{
	int tX= 1;
	while(tN> tX)	// X*i <= tN < X*(i+1) 이 되는 X를 찾기 위함.
		tX*= X;
	for(i= 1; ; i++)	// A*(X^i)의 A를 찾기 위한 루프
	{
		if(i*tX <= tN && tN < (i+1)*tX)
		{
			if(a< 10) vec.push_back('0'+char(i));
			else vec.push_back('A'+ char(i- 10));
			break;
		}
	}
	tN-= (i*tX);
}
으로 변환 완료된 수를 앞자리 부터 차근차근 채워간 후 출력, 구현한다.
```

### 0023. BOJ 11068 회문인 수. S5
:page_with_curl: https://www.acmicpc.net/problem/11068

```
어떤 수를 B로 표현하였을 때, 회문으로 표현 되는지 1 과 0 으로 출력하는 문제. 회문이란, 앞으로 읽을 때와 뒤로 읽을 때
모두 같은 경우를 말한다.

0022번 문제에 사용한 방식으로 진법수로 변환 & 2개의 벡터 배열에 저장하여 하나는 맨앞, 하나는 맨 뒤 부터 일일이 비교하며
회문인지 확인하도록 구현하였음. 그리고, 진법수로 변환&비교 할 때, 굳이 알파벳으로 대응시킬 필요없이 같기만 한지 확인한다.
```

### 0024. BOJ 3085 사탕을 찾아라. S2
:page_with_curl: https://www.acmicpc.net/problem/3085

```
N * N 크기의 공간에 4가지 색의 사탕으로 가득 채워 놓는다. 그 후, 서로 색상이 다른 인접한 사탕 2개의 위치를 바꿨을 때

연속으로 이어져 있는 색상의 사탕을 먹을 수 있다고 한다. 이때, 가장 많이 먹는 사탕의 갯수를 출력하는 문제.

공간에 들어가는 모든 사탕을 4방향 (상,하,좌,우)로 바꿔 연속된 사탕 열이 있는지 일일이 확인하도록 구현, 출력함.
```

### 0025. BOJ 10250 ACM호텔. B3
:page_with_curl: https://www.acmicpc.net/problem/10250

```
W*H 크기 직사각형의 호텔이 있다. 이 호텔은 가장 왼쪽에 엘리베이터가 있으며, 엘리베이터에 가까운 순으로

방 번호가 주어진다. 손님에게 엘리베이터에 가까운 순으로, 1층에 가까운 순으로 방을 배정할 때,

N번째 온 손님은 몇번 방에 배정되는지 출력하는 문제.

손님이 오는 순서에 따라 아래의 이미지와 같이 엘리베이터에 최대한 가깝게 배정되도록 구현함.

| □ □
| ■ □
| ■ □
| ■ □ 

호텔의 H로 나머지 연산을 할 경우, 해당 투숙객의 층 수가 정해지며, H로 나눌 경우 묵는 방의 호수가 정해진다.

단, 나머지가 0일 경우 최상층인 H층 배정, 0이 아닐 경우 나머지Y+1층을 배정해줘야 한다. (호텔은 0XX호가 있지 않으므로)

그 후, cout.width(2);
	cout.fill('0');
	cout << YY << "\n";로 출력하도록 구현하였음.
```

### 0026&27. BOJ 1730 판화. S4
:page_with_curl: https://www.acmicpc.net/problem/1730

```
1730번 문제이지만, 1739로 잘못 작성하였음.
N * N 크기의 동판에 가로, 세로 움직임을 기록하려고 한다. 이때, 동판에 그려진 경로를 출력하는 문제.

. 은 빈 공간, |은 세로 이동, -는 가로 이동, +는 가로,세로 모두 이동했던 경로이다.

가로 이동 기록 배열, 세로 이동 배열 2가지를 이용하여 기록

현재 위치 + 이동하는 위치에 가로 이동, 세로 이동을 남긴 이후

결과 출력에 두가지 배열을 참고하여 출력하도록 구현 하였음.
```

### 0028. BOJ 2840 행운의 바퀴. S4
:page_with_curl: https://www.acmicpc.net/problem/2840

```
같은 글자가 나타나지 않는 회전바퀴가 있다.

각 입력에 대해 회전 횟수와 회전 결과로 가리키고 있는 알파벳을 출력한다고 했을 때,

바퀴에 적혀있는 글자를 출력하는 문제.

특이 사항 : 같은 글자가 나오거나 한 위치에 다른 글자가 나왔다고 입력이 들어올 수도 있음. 이럴 경우,
회전 바퀴가 성립되지 않으므로 ! 출력

Boolean 타입으로 알파벳 check 배열 만들어 중복 알파벳 확인 &

char타입 size 26 배열 선언하여 입력 순서에 맞게 알파벳 기록하여

최종 출력 때, 모든 입력이 성립되는 바퀴일 경우 출력하도록 구현& PASS
```

### 0029. BOJ 2817 ALPS식 투표. S3
:page_with_curl: https://www.acmicpc.net/problem/2817

```
각 직원의 투표수를 1 ~ 14로 나눈 값으로 정렬하여 높은 순으로 토큰을 주게 될 때, 각 직원들이 갖게 될

토큰 수를 출력하는 문제.

특이 사항 : 득표수가 총 투표수의 5% 미만일 경우, 토큰을 주지 않는다.

C++의 vector.h에 들어있는 pair STL 사용, 득표수 , 사람이름 저장하여

1 ~ 14로 나눠 C++의 algorithm.h 의 sort()함수를 사용하여 정렬한다.

그 후, vector pair의 second 요소를 확인하여 해당 직원의 coin 수를 기록& 출력하면 PASS
```
