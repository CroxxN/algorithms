
/*
User: crox-x
LANG: C++
Time: 1681461600
*/
#include <bits/stdc++.h>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll x;
  int res = 0;
  cin >> x;
  int y = 0;
  int coins[] = {100, 20, 10, 5, 1};
  while (x!=0){
    if (x - coins[y] > 0) {
      res++;
      x-=coins[y];
    };
    else {
      y++;
    }
  }
  cout << res;
  return 0;
}
