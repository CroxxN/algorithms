#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, count =0;
	cin >> n >> k;
	int list[n];
	for (int i=0; i<n-2; i++){
		if (list[i] == 0 && list[i+1] == 1 && list[i+2] == 0){
			i+=2;
			count++;

		}
	}
}
