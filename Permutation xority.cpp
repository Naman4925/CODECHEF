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
    if (n==2 ){
        cout<<-1<<endl;
        return;
    }
    if (n%2==1){
        int x = n;
        for (int i=0;i<n;i++) {
            cout<<x<<" ";
            x--;
        }
        cout<<endl;
        return;
    }
    int x = 1;
    for (int i=0;i<n;i++) {
        a[i]=x;
        x++;
    }
    a[0]=2;
    a[1]=3;
    a[2]=1;
    rep(i,n) cout<<a[i]<<" ";
    cout<<endl;
//change variables and template to avoid pla
//solution by TIH 


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
