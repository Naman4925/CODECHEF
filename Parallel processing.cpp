#include<bits/stdc++.h>
using namespace std;
int solve(){


int n; cin>>n;
        vector<long> an(n), pre(n);
        long sum = 0;
        for(int i = 0; i<n; i++){
            cin>>an[i];
            sum+=an[i];
            pre[i] = sum;
        }
        long res = sum;
        for(int i=0; i<n; i++){
            res = min(max(pre[i], sum - pre[i]), res);
        }
        cout<<res<<endl;
    }


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
