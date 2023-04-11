#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, x, y, a, b;
    cin >> n >> m >> x >> y >> a >> b;
    if ((x == 1 && y == 1) || (a == 1 && b == 1) || (n == a && m == b) ||
        (n == x && m == y) || (a == 1 && b == m) || (x == 1 && y == m) ||
        (a == n && b == 1) || (x == n && y == 1))
      cout << 2 << "\n";
    else if (x == 1 || y == 1 || a == 1 || b == 1 || x == n || a == n ||
             b == m || y == m)
      cout << 3 << "\n";
    else
      cout << 4 << "\n";
  }
  return 0;
}