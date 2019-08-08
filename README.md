# 알고리즘을 시작 하기 전...

c++ 표준 입출력의 속도를 빠르게...!

~~~c++
#include <iostream>
#include <cstdio>
#include <string>
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

