#include<iostream>
using namespace std;

int main(){
    string first, second;
    int result =0;
    cin >> first >> second;
    int n = first.length();
    for(int i=0; i<n; i++){
        if(tolower(first[i]) > tolower(second[i])){
            result =1;
            break;
        }
        
        else if( tolower(second[i]) > tolower(first[i]) ){
            result = -1;
            break;
        }

    }

    cout << result;

}