#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

int t=1;
cin>>t;
while(t--)
{
 solve();
 cout<<"\n";
}

return 0;
}
void solve()
{
 int a,b,c,p,q,r;
 cin>>a>>b>>c>>p>>q>>r;
int half = (p+q+r)/2;
 if(p+b+c > half or a+q+c > half or a+b+r > half){
  cout<<"YES";
 }
 else cout<<"NO";

  

}
