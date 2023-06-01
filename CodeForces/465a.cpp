
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
  bitset<100> b(s);
  if (b.count() == n) {
    cout << n;
    return 0;
  }
  int i = n-1;
  int one = 0;
  while (b[i] != 0 && i >=0 ) {
    one++;
    i--;
  }
  cout << (one+1);
  return 0;
}
