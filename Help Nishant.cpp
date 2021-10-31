#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
vector<ll> pre(1e6+1,0);
void comp(){
    pre[1]=1;
    pre[2]=2;
    for(ll i=3;i<=1e6;i++){
        pre[i]=pre[i-1]+i-1;
    }
}
void solve(){
    ll k;
    cin>>k;
    ll pos=lower_bound(pre.begin(),pre.end(),k+1)-pre.begin()-1;
    cout<<2*pos<<endl;
}

int main(){
    FAST1;
    FAST2;
    ll t=1;
    comp();
    cin>>t;
    while(t--){
        solve();
    }
}
