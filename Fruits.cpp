#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,n,m,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>k;
	    int p = min(n,m);
	    m = max(m,n);
	    p = m-p;
	    if(p<=k)
	    cout<<0<<"\n";
	    else
	    cout<<p-k<<"\n";
	    
	}
	return 0;
}
