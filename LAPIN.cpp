#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length(),i;
        vector<char> v1,v2;
        if((n%2)==0){
            for(i=0;i<n/2;i++)
            v1.push_back(s[i]);
             for(i=n/2;i<n;i++)
            v2.push_back(s[i]);
        }
        else if((n/2)!=0){
            for(i=0;i<(n-1)/2;i++)
            v1.push_back(s[i]);
             for(i=(n+1)/2;i<n;i++)
            v2.push_back(s[i]);
            
        }
        sort(v1.begin(),v1.end());
           sort(v2.begin(),v2.end());
           int a=v1.size();
           int count=0;
           for(i=0;i<a;i++){
               if(v1[i]==v2[i])
               count++;
           }
           if(count==a)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
    }
    
    return 0;
}
