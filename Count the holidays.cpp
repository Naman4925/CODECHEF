#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define int long long
#define rep(i,n) for (int i=0;i<n;i++)
#define repi(i,x,n) for (int i=x;i<n;i++)
#define br cout<<endl
#define vi vector<int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    int cnt = 0;
    for (int i=1;i<31;i++){
        if (i%7==0 || i%7==6) cnt--;
    }
    rep(i,n){
        int x;
        cin>>x;
        if (x%7!=0 && x%7!=6) cnt--;
    }
    cout<<-cnt<<endl;

    //solution by TIH 
    //change variables and template to avoid plag
}

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio
    int t;
    t = 1;
    cin>>t;
    while(t--){
  solve();
 }
}

