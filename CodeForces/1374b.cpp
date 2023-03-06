#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, num, steps = 0, two = 0;
  cin >> t;
  while (t--) {
    cin >> num;
    two = 0;
    steps = 0;
    while (num != 1) {
      if (two > 1) {
        cout << -1 << "\n";
        goto next;
      } else if (num % 6 == 0) {
        num /= 6;
        two = 0;
        steps++;
      } else {
        num *= 2;
        two++;
        steps++;
      }
    }
    cout << steps << "\n";
  next:
    continue;
  }
}