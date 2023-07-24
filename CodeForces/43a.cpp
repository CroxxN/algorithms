
/*
User: crox-x
LANG: C++
Time: 1690206200
*/
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  string a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  unordered_map<string, int> map;
  for (auto x : a) {
    map[x]++;
  }
  int m = 0;
  string mstring;
  for (auto b : map) {
    if (b.second>m){
      m = b.second;
      mstring = b.first;
    }
  }
  cout << "\n" << mstring << "\n";
  return 0;
}
