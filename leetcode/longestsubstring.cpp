#include<bits/stdc++.h>
#include <ios>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
  unordered_map<char, int> bucket;
  int left =0, right=0, res = 0;
  string s;
  cin >> s;
  while(right< s.length()){
    char r = s[right];
    bucket[r]++;
    while(bucket[r] > 1){
      char l = s[left];
      bucket[l]--;
      left++;
    }
    res = max(res, right-left +1);
    right++;
  }
}