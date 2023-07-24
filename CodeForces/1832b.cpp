
/*
User: crox-x
LANG: C++
Time: 1685799200
*/
#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
      cin >> ar[i];
    sort(ar, ar + n);
    int start = 0, end = n - 1;
    for (int i = 1; i <= k; i++) {
      if (ar[start] + ar[start + 1] < ar[end])
        start = +2;

      else
        end--;
    }
    long long sum = 0;
    sum = accumulate(ar + start, ar + end + 1, sum);
    cout << sum << "\n";
    cout << "This is it";

  }
  return 0;
}
