#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    for(long long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(long long int i=0;i<n;i++){
	        if(k>=a[i]){cout<<"1";k=k-a[i];}
	        else if(k<a[i]){cout<<"0";}
	    }
	    cout<<endl;
	}
	return 0;
}
