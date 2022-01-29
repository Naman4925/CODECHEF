#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fd(i,a,n) for(int i=n;i<a;i--)
#define pb push_back
#define pob pop_back
#define scout(x) cout<<x<<endl
#define tor  vector<int> 
#define fi(i,a,n) for(int i=a;i<n;i++)
#define wh(t) while(t--)

int main()
{
	int t;cin>>t;

	wh(t)
	{	
	 
	    int z=0;
	   int n;cin>>n;
	   int x[n+1],y[n+1];
	   x[0]=0,y[0]=0;
	   fi(i,1,n+1){
	   	cin>>x[i];
	   }

	   fi(i,1,n+1){
	   	cin>>y[i];
	   }
    fi(i,1,n+1){
    	if(x[i]-x[i-1]>=y[i]){
    		z++;
    	}
    }

   scout(z);

	}
}
