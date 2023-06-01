
/*
User: crox-x
LANG: C++
Time: 1685542300
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
      cin >> ar[i];
    sort(ar, ar + n);
    if ((ar[0] & 1) == 1)
      cout << "YES\n";
    else {
      for (int i = 1; i < n; i++) {
        if ((ar[i] & 1) != 0) {
          cout << "NO\n";
          goto death;
        }
      }
      cout << "YES\n";
    death:
      continue;
    }
  }
  return 0;
}
