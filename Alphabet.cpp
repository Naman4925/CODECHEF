#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,f=0;
    string s,w;
    cin>>s;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        f=0;
        cin>>w;
        for(ll k=0;k<w.size();k++)
        {
            for(ll j=0;j<s.size();j++)
            {
                if(w[k]==s[j])
                {
                    f=1;
                    break;
                }
                else
                    f=0;
            }
            if(f==0)
                break;
        }
        if(f==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
