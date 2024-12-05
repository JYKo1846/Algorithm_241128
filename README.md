# Algorithm 241128
2024.11.28부터 정리 시작하여 코드 주석으로 부족한 설명을 풀어내기 위해 작성한 글

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

C++의 map STL 사용하여 자동 정렬 & 
