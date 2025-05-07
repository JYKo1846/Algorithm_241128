# Chapter 8. 리스트
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

## 리스트 사용법

STL list 는 이중 linked list. 순차접근으로 접근해야 한다.

i) #include <list>를 통해 이용 가능

ii) 길이가 가변적이고, 입력과 삭제가 용이. ( vector 와는 반대되는 성질 )

iii) 검색 및 원소 접근 속도는 vector에 비해 느리다. 순차 탐색을 사용함
	-> 따라서, iterator 사용 ++, -- 연산을 통해 원소에 접근이 가능하다.

iiii) List STL의 주요 멤버 함수
	begin() : 컨테이너의 맨 앞을 가리키는 iterator를 반환.
	end() : 컨테이너 맨 뒤를 가리키는 iterator를 반환.
	assign(A, X) : X로 초기화된 노드를 A개 만큼 할당
	front() : 컨테이너 맨 앞 데이터 반환, 참조
	back() : 컨테이너 맨 뒤 데이터 반환, 참조
	push_back() : 컨테이너 끝에 데이터 추가
	push_front() : 컨테이너 앞에 데이터 추가
	pop_back() : 컨테이너 끝 데이터 제거
	pop_front() : 컨테이너 맨 앞 데이터 제거
	clear() : 컨테이너 내부 모든 데이터 제거
	empty() : 컨테이너에 저장된 데이터가 있을 경우 false, 없을 경우 true 반환
	size() : 컨테이너에 저장된 데이터 갯수 반환
	insert(A, X) : A위치에 X 데이터 입력
	erase(iter_begin(), iter_end()) : iter_begin ~ iter_end 범위의 데이터 제거
	remove(A) : 지정한 값 A와 일치하는 모든 데이터 제거

### 0076. BOJ 1158 요세푸스. S4  
:page_with_curl: https://www.acmicpc.net/problem/1158

```
1번 ~ N번까지의 사람이 원을 이뤄 앉아있을 때, K번째 사람을 제거한다.

이후 남은 사람들로 N명의 사람이 모두 없어질 때 까지 계속한다.

이럴 경우, 나오는 수열을 출력하는 문제.

C++ STL 중 list 를 사용하여 구현하였다. 

list STL과 iterator를 사용하여 구현.

이때, list.erase(iterator) 의 경우, 지운 원소 다음 주소를 가리킨다. 꼭!! 이터레이터로 받아줘야 한다. 

ex) it= ls.erase(it);

그리고, list는 임의 접근 배열이 아니므로, iterator++ 방식으로 순차탐색만이 가능하다.

while(!ls.empty())
{
	int tK= K-1;
	while(tK-- > 0)
	{
		if(*it== ls.back()) it= ls.begin();	// 원소들은 순환 구조 이므로
											// iterator가 끝에 도달할 경우, 
											// 시작 위치로 다시 위치 변경
		else it++;
	}
	cout << *it;
	if(ls.size()!= 1) cout << ", ";
	it= ls.erase(it);
	if(it== ls.end()) it= ls.begin();
}

cout << ">";


위와 같은 식으로, 원소를 하나씩 제거하며 구현 시 메모리 2152KB, 80ms 소요로 PASS
```

### 0077. BOJ 1406 에디터. S2 
:page_with_curl: https://www.acmicpc.net/problem/1406

```
명령어 4개를 지원하는 한줄 짜리 에디터.

'L' : 현재 커서를 왼쪽으로 이동. 단, 현재 위치가 맨 앞일 경우 무시

'D' : 현재 커서를 오른쪽으로 이동. 단, 현재 위치가 맨 뒤일 경우 무시

'B' : 현재 커서 왼쪽에 있는 글자를 제거. 단, 현재 위치가 맨 앞일 경우 무시

'P $' : 현재 커서 왼쪽에 $ 입력

초기 문자열과 명령어 배열을 입력했을 때, 최종 문자열을 출력하는 문제.

Doubly Linked list 를 사용하여 구현하였음.


cin >> M;

while(M--)
{
	cin >> cmd;

	if(cmd== 'L')
	{
		if(iter!= arr.begin()) iter--;
	}
	else if(cmd== 'D')
	{
		if(iter!= arr.end()) iter++;
	}
	else if(cmd== 'B')
	{
		if(iter!= arr.begin()) iter= arr.erase(iter);
	}
	else if(cmd== 'P')
	{
		char input;
		cin >> input;
		arr.insert(iter, input);
	}
}

for(char c : arr)
	cout << c;
cout << "\n";

위와 같이 구현하여 PASS.

여러번 FAIL 된 이유 !!!!! : 이중 if문에서 {} 를 쓰지 않아 연산이 설계대로 되지 않음!!! 유의하기!!!!!

사용 메모리 : 21020KB, 소요 시간 60ms

```
