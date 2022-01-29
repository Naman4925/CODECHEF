#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll t,i,c1,c2; cin>>t;
    while(t--){
        string s;
        cin>>s; c1=c2=0;
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='0') c1++;
            else c2++;
        }
        if(c1==1||c2==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
	return 0;
}
