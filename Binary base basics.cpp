#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


void solve(){
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in","w",stdout);
    #endif fast_io;
}
int main() {
    solve();
    int t;
    cin>>t; 
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0,h=n-1,mid=0;
        while(l<=h){
            if(s[l]!=s[h]){
                mid++;
            }
            l++;
            h--;
        }
        int r=k-mid;
        if(r>=0&&r%2==0){
            cout<<"YES"<<endl;
        }
        else if(r>=0&&n%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 // your code goes here
 return 0;
}
