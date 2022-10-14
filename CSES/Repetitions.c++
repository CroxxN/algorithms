#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string seq;

    cin >> seq;

    int flag = 0, great=0;
    for(int i=0; i<seq.length()-1; i++){
        if(seq[i]==seq[i+1]){
            flag++;
            great = max(great, flag);
        }
        else
        flag = 0;

    }

    cout << great+1;

}