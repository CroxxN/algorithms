#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ar[n];
    long long count = 0;
    for (int i = 0; i < n; i++)
      cin >> ar[i];

    sort(ar, ar+n);
    count = max((long long)ar[0]*ar[1], (long long)ar[n-1]*ar[n-2]);
    cout << count << "\n";
  }
  return 0;
}
