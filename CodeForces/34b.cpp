#include<bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
  int n, m, sum=0;
  cin >> n >> m;
  int num[n];
  for (int i=0; i<n; i++)
  cin >> num[i];
  sort(num, num + n);
  for (int i=0; i<m; i++){
    if (num[i]>0)
      break;
    sum += num[i];
  }
  cout << abs(sum);
}