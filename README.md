# 알고리즘을 시작 하기 전...

c++ 표준 입출력의 속도를 빠르게...!

~~~c++
#include <iostream>
#include <cstdio>
#include <string>

#include <bits/stdc++.h> //이것만 include 해줘도 전체 다 됨
using namespace std;

int main()
{
    //c++, c stream 사이의 sync를 맞춰주는 역할. cout 만 쓰면 필요 없으니 꺼준다
    ios::sync_with_stdio(0);

    //cin과 cout이 번갈아 나올 때 마다 flush를 하지 않도록 하는 명령
    cin.tie(0);
}
~~~



공백이 있는 string 입력

~~~c++
string s;
getline(cin, s);
~~~



float 보다 double 이 저장공간을 더 많이 차지하지만 더 정확하기 때문에 double을 쓰는 걸 추천



실수 비교

~~~c++
//등호를 사용해선 안되고 둘의 차이가 극도로 작은 값 이하면 동일하다고 처리하는 것이 안전함
if (abs(a-b) < le-12)
    cout << "same"
~~~



실무에서는 전역변수가 메모리를 계속 점유하고 있기 때문에 사용하지 않는 것을 권장하지만 코딩테스트에서는 마음껏 써서 굳이 함수 인자로 넘기고 받는 것에 타이핑을 낭비할 필요가 없다. 지역 변수는 0으로 초기화되지 않지만 전역 변수는 0으로 초기화 됨.



~~~c++
#include <bits/stdc++.h>
//사람들이 많이 사용하는 표준 라이브러리 헤더들을 모두 한 번에 Compile 될 수 있도록 한 파일을 include 하는 것
//gcc 컴파일러에서만 사용되는 헤더이다.
~~~

> 추가 방법
>
> [mac vsCode](<https://hellogaon.tistory.com/63>)



#### 배열과 연결리스트

배열은 인덱스에 해당하는 원소를 빠르게 접근할 때, 데이터 자주 바꾸는 일 없을 때 유용

데이터 쌓아두는 목적

배열 전체를 특정 값으로 초기화 할 때 -> fill 함수를 이용하자



벡터는 배열과는 다르게 크기를 조정할 수 있다.







[출처](<https://blog.encrypted.gg/category/강좌/실전 알고리즘>)