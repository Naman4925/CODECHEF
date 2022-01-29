#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll t,n,i,x;
    cin>>t;
    while(t--){
        cin>>n; x=0;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            x^=a[i];
        }
        cout<<x<<"\n";
    }
	return 0;
}
