#include<iostream>
using namespace std;
int main(){
    int a;
    long long ans=0;
    cin >> a;
    int ar[a];
    for(int i=0; i<a;++i){
        cin >> ar[i];
    }
    for(int i=1; i<a;++i ){
        
        if(ar[i]<ar[i-1]){
            ans+=(ar[i-1]-ar[i]);
            ar[i]=ar[i-1];
        }
    }
    cout << ans;
}
