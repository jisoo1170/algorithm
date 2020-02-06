#include <bits/stdc++.h>
using namespace std;

void solve(int n){
  for(int i = 2; i*i <= n; i++){
    while(n % i == 0){  //안나눠질때까지 나눔
      cout << i << '\n';
      n /= i;
    }
  }
  if(n != 1) cout << n; //나머지 출력
}
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  solve(n);
}