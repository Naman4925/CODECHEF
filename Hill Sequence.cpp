#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main() {
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll num,z,f=0;
        cin>>num;
        map<ll,ll>r;
        vector<ll>res,v;
        for(ll i=0;i<num;i++){
            cin>>z;
            r[z]++;}
            for(auto z:r){
                if(z.second>2){
                    f=1;
                    break;}
                    v.push_back(z.first);}
                    sort(v.begin(),v.end());
                    if(f==1||r[v[v.size()-1]]==2)
                    cout<<"-1";
                    else{
                        for(int i=0;i<v.size();i++){
                            if(r[v[i]]==2)
                            cout<<v[i]<<" ";
                        }
                        for(ll i =v.size()-1;i>=0;i--)
                        cout<<v[i]<<" ";}
                        cout<<endl;
                    }
                }
