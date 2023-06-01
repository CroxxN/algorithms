
/*
User: crox-x
LANG: C++
Time: 1685538800
*/
#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    unordered_set<string> map;
    for (int i = 0; i < n - 1; i++) {
      string key = s.substr(i, 2);
      if (map.find(key) == map.end()) {
        count++;
        map.insert(key);
      }
    }
    cout << count << "\n";
  }
  return 0;
}
