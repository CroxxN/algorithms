#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, tot=0, count =0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    sort(arr,arr+n,greater<int>());
    int sum =0;

   sum = accumulate(arr, arr+n, sum);
    for(int x: arr){
        tot+=x;
        count++;
        if (tot > sum/2){
            break;
        }

    }
   cout << endl << count;



}