# Chapter 2. 구현
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

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