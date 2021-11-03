#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void check()
{
lli n;
cin>>n;
lli brr[n];
for(lli i=0;i<n;i++)cin>>brr[i];
cout<<(brr[0]&brr[1])<<" ";
for(lli i=1;i<n-1;i++)
    cout<<max((brr[i]&brr[i+1]),(brr[i]&brr[i-1]))<<" ";
cout<<(brr[n-1]&brr[n-2])<<endl;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
lli t =1;
cin>>t;
while(t--)
{
    check();
}
}
