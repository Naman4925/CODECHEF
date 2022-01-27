#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int max=0;
int main() {
	// your code goes here
	int t;
	cin>>t;
	int a[t];
	int b[t];
	vector<int> v(t);
	    for(int i=0;i<t;i++){
	        cin>>a[i];
	        cin>>b[i];
	    }
	    for(int i=1;i<t;i++){
	        a[i]=a[i]+a[i-1];
	        b[i]=b[i]+b[i-1];
	    }
	    for(int i=0;i<t;i++){
	        v[i]=b[i]-a[i];
	    }
	    
	int max=v[0];
	 for(int i=0;i<t;i++){
	        if(abs(max)<abs(v[i])){
	            max=v[i];
	        }
	    }
	if(max<0){
	        cout<<"1 "<<abs(max)<<endl;
	    }
	    else
	    cout<<"2 "<<max<<endl;
	    
	return 0;
}
