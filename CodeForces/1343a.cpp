#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long n, total, t, count = 0;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int k = 0; k < n; k++) {
      total += 2 * count;
      if (total == n) {
        cout << k;
      }
    }
  }
}
