
/*
User: crox-x
LANG: C++
Time: 1683384400
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
    int total = 0;
    int curr = 0;
    int consec = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    if (arr[0] == 0) {
      total = 1;
    };
    for (int i = 1; i < n; i++) {
      if (arr[i] == arr[i - 1] && arr[i] == 0 && arr[i - 1] == 0) {
        curr++;
        consec =1 ;
      } else if (arr[i] + arr[i - 1] == 1) {
        curr = 1;
        total = max(total, curr);
        curr = 0;
      };
      total = max(total, curr);
    }
    cout << (total+consec)  << "\n";
  }
  return 0;
}
