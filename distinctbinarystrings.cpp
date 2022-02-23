#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n>>s;
    int c=1;
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i]){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
