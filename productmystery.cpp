#include<bits/stdc++.h>
using namespace std;

int solve(){
    int b,c;cin>>b>>c;
    cout<<c/__gcd(b,c)<<endl;
    return 0;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
