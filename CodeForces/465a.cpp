
/*
User: crox-x
LANG: C++
Time: 1681548300
*/
#include <bits/stdc++.h>
#include <bitset>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  string s;
  cin >> n >> s;
  int count = 1;
  bitset<100> b(s);
  bitset<100> one(b.to_ulong() + 1);
  one = b ^ one;

  for (int i= __builtin_clz(b.to_ulong()); i< 100-n; i--){
    one[i] = 0;
  }
  cout << one << "\n";
  int res = __builtin_popcount(one.to_ulong());
  // int c = 0;
  // while (b[c] == 0) {
  //   c++; //lmao
  //   if (c > n-1) {
  //     cout << 1;
  //     return 0;
  //   };
  // }
  // for (int i = c; i < n; i++) {
  //   count += b[i] | one[i];
  // }
  cout << res;
  return 0;
}

