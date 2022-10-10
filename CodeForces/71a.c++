#include<iostream>
using namespace std; 


void test(){
    string word;
    cin >> word;
    if(word.length()>10)
    cout << word[0] << word.length() - 2 << word[word.length()-1] <<"\n";
    else
    cout << word << "\n";
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    test();
}