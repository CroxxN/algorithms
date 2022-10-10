#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n>> m;
    if(n%2==0){
        cout << m*(n/2);
    }
    else if(m%2 ==0){
        cout << n*(m/2);
    }
    else{
        cout <<  n/2 * m + m/2;
    }
}