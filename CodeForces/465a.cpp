
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
  int count = 0;
  bitset<100> b(s);
  bitset<100> one(b.to_ulong() + 1);
  int c = 0;
  while (b[c] == 0) {
    c++;
    if (c < 1) {
      cout << 1;
      return 0;
    };
  }
  for (int i = c; i < n; i++) {
    count += b[i] | one[i];
  }
  cout << count ;
  return 0;
}

