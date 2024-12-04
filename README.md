# Algorithm 241128
2024.11.28부터 정리 시작하여 코드 주석으로 부족한 설명을 풀어내기 위해 작성한 글

문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐


### 0001. BOJ 2744 대소문자 바꾸기. B5  https://www.acmicpc.net/problem/2744
```
입력받은 알파벳 문자열의 각 인덱스를 대문자 -> 소문자 / 소문자 -> 대문자로 바꾸는 문제.

ASCII 코드를 사용하여 각 문자를 모두 대문자 -> 소문자 & 소문자 -> 대문자로 변경하여 해결.
```

### 0002. BOJ 1919 애너그램 만들기. B2  https://www.acmicpc.net/problem/1919
```
두 문자열을 비교하여 몇 단어를 없애야 같은 문자만 남는지 출력하는 문제.

두 문자열의 모든 문자를 탐색하는 문자열 + 완전 탐색으로 해결.
```

### 0003. BOJ 1157 단어 공부. B1  https://www.acmicpc.net/problem/1157
```
문자열에서 가장 많이 사용된 알파벳을 출력하는 문제.

ASCII 코드 이용, interger 배열에 갯수를 기록하여 답안을 출력하도록 해결
```

### 0004. BOJ 1543 문서 검색. S5  https://www.acmicpc.net/problem/1543
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

### 0005. BOJ 13223 소금 폭탄. B3  https://www.acmicpc.net/problem/13223
```
목표시각 - 현재 시각을 초단위 까지 출력하는 문제.

단위 계산 문제.

C++에서 2자리 출력 형식.
cout.width(2);
cout.fill('0');
cout << OUTPUT << "\n";

시간 단위 계산 + 위 출력 형식 사용으로 해결.

```

### 0006. BOJ 27866 문자와 문자열. B5  https://www.acmicpc.net/problem/27866
```
문자열의 i번째 문자를 출력하는 문제.

C++ String.h 인덱스에 접근 & 출력하도록 구현
```

### 0007. BOJ 9086 문자열.  B5  https://www.acmicpc.net/problem/9086
```
문자열의 시작문자, 끝문자를 출력하는 문제.

C++의 String.h의 양 끝 문자를 출력하도록 구현
```

### 0008. BOJ 11720 숫자의 합. B4  https://www.acmicpc.net/problem/11720
```
공백없이 입력되는 모든 한 자리 수의 합을 출력하는 문제.

입력받는 한 자리 수의 갯수 N 만큼 C stdio.h의 stdio.h의 scanf()함수를 사용하여 입력 & 결과 출력.
```

### 0009. BOJ 10809 알파벳 찾기. B2  https://www.acmicpc.net/problem/10809
```
