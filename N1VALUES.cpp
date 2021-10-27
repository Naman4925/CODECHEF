#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        if(n==1)
        cout<<"1 1";
        else
        {
            for(i=1;i<n;i++)
            cout<<i<<" ";
            ll p=pow(2,n);
            cout<<i-1<<" "<<p-n*(n+1)/2+1;
            
        }
        cout<<"\n";
    }
	// your code goes here
	return 0;
}
