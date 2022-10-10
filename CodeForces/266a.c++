#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string str;
    int count =0;
    cin >> n >> str;
    for(int i =0; i<str.length(); i++){
        if(str[i+1] == str[i]){
            count++;
        }
    }
    cout << count;

}