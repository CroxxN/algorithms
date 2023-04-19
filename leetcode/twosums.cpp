#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main(){
  unordered_map<int, int> mp;
  int f, s;
  for (int i=0; i<nums.size(); i++) mp[x] = i;
  for (int i=0; i<nums.size(); i++){
    int comp = target k-nums[i];
    if (mp[comp] && i!=mp[comp]){
      f = i;
      s=mp[comp];
    };
  }
  return 0;
}