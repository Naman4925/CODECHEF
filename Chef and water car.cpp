#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    int t;
    cin>>t;
    ll n,v;
    while(t--)
    {
        cin>>n>>v;
        ll max_price =0,min_price =0;
        max_price=((n-1)*n)/2;
        if(v==1){
            min_price=max_price;
            
        }
        else{
            if(v>=n-1){
                min_price = n-1;
                
            }else{
                min_price+=v+((n-v)*(n-v+1))/2-1;
                
            }
        }
        cout<<max_price<<" "<<min_price<<endl;
    }
	// your code goes here
	return 0;
}
