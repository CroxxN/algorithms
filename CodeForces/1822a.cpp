
/*
User: crox-x
LANG: C++
Time: 1682347000
*/
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int q;
  cin >> q;
  while (q--) {
    int n, t;
    cin >> n >> t;
    int ar[n], tr[n];
    for (int i = 0; i < n; i++)
      cin >> ar[i];
    for (int i = 0; i < n; i++)
      cin >> tr[i];
    int ma = -1;
    int prev = 0;
    for (int i = 0; i < n; i++) {
      if (ar[i] <= t && tr[i] > prev) {
        ma = i + 1;
        prev = tr[i];
      }
      t--;
    }
    cout << ma << "\n";
  }
  return 0;
}
