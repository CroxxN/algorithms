#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin >> input;
    int count =0;
    map<char,bool> counter;
    int len = input.length();
    for(int i=0; i<len; i++){
        if(counter.count(input[i]) == 0){
            counter.insert({input[i], true});
            count++;
        }
   }
    if(count % 2 == 0)
    cout << "CHAT WITH HER!";
    else
    cout << "IGNORE HIM!";
}