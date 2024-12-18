# Chapter 1. 문자열
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

### 0001. BOJ 2744 대소문자 바꾸기. B5  
:page_with_curl: https://www.acmicpc.net/problem/2744

```
입력받은 알파벳 문자열의 각 인덱스를 대문자 -> 소문자 / 소문자 -> 대문자로 바꾸는 문제.

ASCII 코드를 사용하여 각 문자를 모두 대문자 -> 소문자 & 소문자 -> 대문자로 변경하여 해결.
```

### 0002. BOJ 1919 애너그램 만들기. B2  
:page_with_curl: https://www.acmicpc.net/problem/1919

```
두 문자열을 비교하여 몇 단어를 없애야 같은 문자만 남는지 출력하는 문제.

두 문자열의 모든 문자를 탐색하는 문자열 + 완전 탐색으로 해결.
```

### 0003. BOJ 1157 단어 공부. B1  
:page_with_curl: https://www.acmicpc.net/problem/1157

```
문자열에서 가장 많이 사용된 알파벳을 출력하는 문제.

ASCII 코드 이용, interger 배열에 갯수를 기록하여 답안을 출력하도록 해결
```

### 0004. BOJ 1543 문서 검색. S5  
:page_with_curl: https://www.acmicpc.net/problem/1543

```
문자열에서 특정 문자열을 찾는 문제.

C++ String.h 의 입력_문자열.find(찾고자하는_문자열, 시작위치) 함수 사용.
Return Value : 찾을 경우, 해당 문자열 시작 Index 출력
              못 찾을 경우, 쓰레기 값인 npos 객체 출력

  i= str_x.find(str_a, i);
  if(i< 0)     // 위 find 함수의 return 값이 npos 일 경우, i< 0  이 됨.
  {  
    갯수 찾는 루프 종료
  }
  i+= str_a.length();  // 검색 위치를 뒤로 옮겨주기 위한 연산

위 연산 구현으로 해결.
```

### 0005. BOJ 13223 소금 폭탄. B3  
:page_with_curl: https://www.acmicpc.net/problem/13223

```
목표시각 - 현재 시각을 초단위 까지 출력하는 문제.

단위 계산 문제.

C++에서 2자리 출력 형식.
cout.width(2);
cout.fill('0');
cout << OUTPUT << "\n";

시간 단위 계산 + 위 출력 형식 사용으로 해결.

```

### 0006. BOJ 27866 문자와 문자열. B5  
:page_with_curl: https://www.acmicpc.net/problem/27866

```
문자열의 i번째 문자를 출력하는 문제.

C++ String.h 인덱스에 접근 & 출력하도록 구현
```

### 0007. BOJ 9086 문자열.  B5  
:page_with_curl: https://www.acmicpc.net/problem/9086

```
문자열의 시작문자, 끝문자를 출력하는 문제.

C++의 String.h의 양 끝 문자를 출력하도록 구현
<<<<<<< HEAD
```
=======
```

### 0008. BOJ 11720 숫자의 합. B4  
:page_with_curl: https://www.acmicpc.net/problem/11720

```
공백없이 입력되는 모든 한 자리 수의 합을 출력하는 문제.

입력받는 한 자리 수의 갯수 N 만큼 C stdio.h의 stdio.h의 scanf()함수를 사용하여 입력 & 결과 출력.
```

### 0009. BOJ 10809 알파벳 찾기. B2  
:page_with_curl: https://www.acmicpc.net/problem/10809

```
입력 받은 문자열에서 a ~ z 의 알파벳이 몇번째 인덱스에 나타나는지 출력하는 문제.

ASCII를 사용하여 알파벳을 0 ~ 26의 정수로 변경 후, 처음으로 보인 알파벳 위치를 출력.
```

### 0010. BOJ 1152 단어의 개수. B2
:page_with_curl: https://www.acmicpc.net/problem/1152

```
대소문자와 공백이 포함된 단어가 입력되었을 때, 몇개의 단어로 이루어져 있는지 출력하는 문제.

C++ String.h 사용.
while(input_string.find(" ", idx)!= npos)
{
  단어 갯수 ++;
}
로 구현하여 출력.
공백만 있을 경우, 따로 처리하여 해결.
```

### 0011. BOJ 2908 상수. B2
:page_with_curl: https://www.acmicpc.net/problem/2908

```
두개의 세자리 정수를 입력받았을 때, 두 수를 뒤집어 읽었을 때 더 큰 수를 출력하는 문제.
ex) 734 893 -> 437 398 => ANS : 437

int calc(int in)
{
  return in/100 + (in%100)/10 * 10 + (in%10)*100;
}
  na= calc(a);
  nb= calc(b);
  cout << na > nb ? na : nb;

두 수를 뒤집어 비교 & 출력하도록 구현.
```

### 0012. BOJ 5622 다이얼. B2
:page_with_curl: https://www.acmicpc.net/problem/5622

```
다이얼 전화기를 이용해 알파벳을 입력 하려할 때, 전화를 걸기 위한 최소한의 시간을 출력하는 문제.
int changeNum(char x)
{
	if('A'<= x && x<= 'C')
		return 3;
	if('D'<= x && x<= 'F')
		return 4;
	if('G'<= x && x<= 'I')
		return 5;
	if('J'<= x && x<= 'L')
		return 6;
	if('M'<= x && x<= 'O')
		return 7;
	if('P'<= x && x<= 'S')
		return 8;
	if('T'<= x && x<= 'V')
		return 9;
	if('W'<= x && x<= 'Z')
		return 10;
}
계산하여 출력.
```

### 0013. BOJ 11718 그대로 출력하기. B3
:page_with_curl: https://www.acmicpc.net/problem/11718

```
입력 받은 대로 출력하는 문제.

C++ 의 getline 함수를 사용하여 공백을 포함한 한 줄의 입력을 모두 입력 받고 출력한다.

while(getline(cin, in))
	{
		cout << in << endl;
	}

```

### 0014. BOJ 10158 개미. S3
:page_with_curl: https://www.acmicpc.net/problem/10158

```
격자 공간에서 대각선으로 움직이는 개미의 T 시간 뒤의 위치를 출력하는 문제.

문제의 시간 제한이 0.15초라 최대한 추상화 하여 연산해야 함.

- 1번째 구현 => FAIL.
STL PAIR + VECTOR 사용하여 구현
개미의 위치가 정해진 위치를 반복하는 것을 알고, 반복되는 위치들을 모두 기록. 그 후, T 시간 후의 위치를 계산하도록 구현 => TIME OVER

- 2번째 구현 => PASS.
개미의 T 시간 이후 대각선 움직임은 T시간 이후 수평 움직임 + T 시간 이후 수직 움직임으로 볼 수 있다.
따라서, position_After_T_Cross= position_After_T_Horizon + position_After_T_Vertical (x, y) = (x, 0) + (y, 0)
그러므로, start_Position_Horizon+ T , start_Position_Vertical+ T 연산 시 위치를 알 수 있다.
격자 공간 W * H 에서 수평 위치는 W*2+ X= X, H*2+ Y = Y 와 같음을 알 수 있다.

따라서,
T 시간 이후 위치는
nx= (start_X+ T)%(2*w);
ny= (start_Y+ T)%(2*h);
임을 알 수 있다.

단, 계산 위치가 W, H를 넘어갈 경우, 개미가 벽에 튕겨져 0을 향해 돌아간다.
따라서, 해당 위치를 알기 위해 2*w, 2*h를 뺀 값을 연산하여 T 시간 이후의 위치를 알아내게 된다.
if(nx > w)
  nx= 2*w- nx;
if(ny > h)
  ny= 2*h- ny;
```

### 0015. BOJ 1236 성 지키기. B1
:page_with_curl: https://www.acmicpc.net/problem/1236

```
직사각형 모양의 성 안의 모든 행과 열에 빈 틈 없이 경비를 설 수 있도록 경비원을 세우는 문제.

기존에 세워진 경비병들을 모두 입력, BOOL 배열 true로 저장하여 false를 모두 없애도록 구현
```

### 0016. BOJ 10431 줄세우기. S5
:page_with_curl: https://www.acmicpc.net/problem/10431

```
20명의 학생들을 작은 순으로 정렬할 때, 입력받은 순서대로 줄을 세우게 된다.
이때, 새로 정렬하는 학생이 기존의 학생들 보다 작을 경우 학생들은 한 걸음씩 뒤로 물러나게 된다.
그럴 경우, 정렬을 끝마쳤을 때 학생들이 총 걸은 발걸음 수를 출력하는 문제.

- 1번째 구현 => PASS
2차원 배열에 20번 정렬하는 모든 과정을 저장하며, 그때 움직이는 걸음 수를 res 변수에 저장& 출력하도록 구현

- 2번째 구현 => PASS
20명의 학생들을 하나씩 탐색하며, 입력 배열에서 자신보다 작은 학생이 앞에 있을 경우 res++ 하여 총 걸음걸이 수를 출력하도록 구현

```

### 0017. BOJ 10989 수 정렬하기3. B1
:page_with_curl: https://www.acmicpc.net/problem/10989

```
N개의 수가 주어졌을 때, 오름차순으로 정렬하여 출력하는 문제. 특이사항 : N이 최대 1000만개가 된다. 입력값의 범위는 1 ~ 10000
정렬하여 출력할 경우, 시간 초과.

입력을 받을 때, in[입력받은 수]++하여
출력 시, 오름차순으로 1부터 cout << 입력받은 수 << "\n"; * in[입력 받은 수] 하면 정렬한 것과 같은 출력이 나오게 된다.
```

### 0018. BOJ 15552 빠른 A+B. B4
:page_with_curl: https://www.acmicpc.net/problem/15552

```
A+B의 결과 값을 출력하는 문제. 특이 사항 : TC는 최대 100만, 시간 제한은 1초이므로 촉박함.

cin.tie(0);  => cin 표준 입력 버퍼와 cout 표준 출력 버퍼를 분리하여 출력 버퍼를 비우는 불필요한 연산에 소모되는 시간을 줄이기 위함.
ios_base::sync_with_stdio(false);  => c와 c++간의 버퍼를 분리하여 cin/ cout 이 stdin/stdout의 속도에 맞추지 않게 되어 속도가 빨라지게 됨.
                                    단, cin / cout 과 scanf / printf 를 같이 사용하면 안됨.

위 두 함수를 사용하여 입/출력 속도를 최대한 줄여 구현하여 해결.
```


### 0019. BOJ 3273 두 수의 합. S3
:page_with_curl: https://www.acmicpc.net/problem/3273

```
N개의 서로 다른 정수 배열이 주어졌을 때, 특정 값 X가 되는 두 원소의 합 ai+ aj가 되는 쌍의 갯수를 출력하는 문제.

- 1번째 구현 => FAIL
백만개의 index를 가진 integer 배열 선언하여 구현하려 했으나, 배열 Out of Bound로 구현 실패했으나 문제는 다른 곳에 있었음.
배열에 입력받는 수를 넣어 일일이 계산하려는 시도를 하려 했음. 시간 낭비이므로 폐기

- 2번째 구현  => PASS
X의 1/2 이하의 수들  a 중, a 와 X-a 가 둘 다 존재할 경우 X가 되는 쌍이 있는 것이므로 res++ 하도록 구현.
입력 받을 때,
  cin >> tmp;    // tmp : 임시로 정수를 입력받는 변수
  cnt[tmp]= 1;   // bool cnt[]로 이 정수가 입력 받았음을 알 수 있는 배열.

  for(i= 0; i<= (X-1)/2; i++)
  {
    if(cnt[i] && cnt[X-i])
      res++;
  }
로 res를 출력하도록 구현.

```

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
>>>>>>> 8c07ff9296589c49c6dc0e69264de3960c39ea1c
