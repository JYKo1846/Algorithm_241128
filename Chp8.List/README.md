# Chapter 8. 리스트
문제 뒤의 알파벳&숫자 : 문제의 난이도 B(Bronze) S(Silver) G(Gold) P(Platinum) / 숫자가 작을수록 난이도가 높아짐

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

