#include <bits/stdc++.h>

using namespace std;

double calc(vector<int> nums1, vector<int> nums2);
int main()
{
  double result = calc({1, 2, 3, 4, 5}, {6, 7, 8, 9, 10});
  cout << result << endl;
}

double calc(vector<int> nums1, vector<int> nums2)
{
  vector<int> nums3;
  int m = nums1.size();
  int n = nums2.size();
  int nm = n + m;
  nums3.reserve(nm + 1);

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (nums1[i] < nums2[j])
      {
        nums3.push_back(nums1[i]);
      }
      else
      {
        nums3.push_back(nums2[j]);
      }
    }
  }
  if (nm % 2 != 0)
    return nums3[(nm / 2) + 1];
  else
  {
    int med = (int)nm / 2;
    return (nums3[med] + nums3[med + 1]) / 2;
  }
}