
/*
User: crox-x
LANG: C++
Time: 1681552300
*/
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    char arr[n][n];
    vector<pair<int, int>> p;
    if (n == 1 && s[0] == 0)
      cout << 0;
    else if (n == 1 && s[1] == 1)
      cout << 1;
    else {

      for (int i = 0; i < n; i++) {
        arr[0][i] = s[i];
        if (s[i] == '1')
          p.push_back(make_pair(i, 0));
      }

      for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
          arr[i][j] = arr[i - 1][j - 1];
          if (arr[i][j] == '1')
            p.push_back(make_pair(j, i));
        }
        arr[i][0] = '0';
      }
      sort(p.begin(), p.end());
      int dp[n + 1][n + 1];
      dp[0][0] = arr[0][0] - '0';
      for (int i = 0; i < p.size(); i++) {
        for (int j = 1; j < p.size(); j++) {
            
          dp[i][j] = arr[i][j] =='1' ? 1+ dp[i][j-1] : dp[i][j-1];
        }
        // if (p[i].first == p[i-1].first || (p[i].second == p[i-1].second))
      }
      cout << "\n";
    }
  }
  return 0;
}
