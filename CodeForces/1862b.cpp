
/*
User: crox-x
LANG: C++
Time: 1692891000
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
    int b[n];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    int m = 2 * n - 1;
    int actual = 0;
    int c[m];
    int d = 0;
    for (int i = 0; i <= n - 1; i++) {
      if (b[i] > b[i + 1]) {
        if (b[i + 1] == 1) {
          c[d] = 1;
          c[d+1] = 1;
        } else {

          c[d] = b[i + 1] - 1;
          c[d + 1] = b[i + 1];
        }
      } else {
        c[d] = b[i];
        c[d + 1] = b[i + 1];
      }
      d += 2;
    }
    cout << d << "\n";
    for (int i = 0; i < d - 2; i++)
      cout << (c[i]-1) << " ";
    cout << c[d-2] << "\n";
  }
  return 0;
}
