#pragma GCC optimize("Ofast")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0; i<n; i++)
#define pb push_back
#define mp make_pair
#define el "\n"
#define accuracy setprecision(20)
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
typedef long long int ll;
#define F first
#define S second
#define IamSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    
void hyuga(int T)
{
 int n; cin>>n;
vi b,a; int x; bool c=true;
fo(i,n)
{
    cin>>x; b.pb(x);
    if(i>0 && b[i-1]%b[i]!=0)
    {
        c=false;
    }
}
if(c)
{
    fo(i,n) cout << b[i] << ' ';
    cout << el;
}
else cout << "-1\n";
 
 
}

int main()
{
    IamSpeed
int T=1;
cin>>T;
while (T--)
{
hyuga(T);
}

return 0;
}
