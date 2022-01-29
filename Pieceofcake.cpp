#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    
	    string s;
	    cin>>s;
	    
	    map<char, int> mp;
	    
	    for(auto x: s){
	        mp[x]++;
	    }
	    
	    bool flag=true;
	    for(int i=0;i<s.size();i++){
	        if(mp[s[i]]==(s.size()-mp[s[i]])){
	            cout<<"YES"<<endl;
	            flag=false;
	            break;
	        }
	    }
	    
	    if(flag){
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
