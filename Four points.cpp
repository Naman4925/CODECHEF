#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pii         pair<int, int>
#define ld          long double
#define ff          first
#define ss          second
#define vs          vector<string>
#define vpll        vector<pll>
#define vb          vector<bool>
#define mp          make_pair
#define pb          push_back
#define endl        '\n'

const ll INF       = 2e18;
const ll mod       = 1000000007;
const ll mod2      = 998244353;


template <typename T, typename Y> ostream& operator << (ostream& x, const pair<T,Y>& v) {x<<v.ff<<" "<<v.ss; return x;}
template <typename T, typename Y> ostream& operator << (ostream& x, const map<T, Y>& v) {for (auto it : v) x << it.ff << ": " << it.ss << endl; return x;}
template <typename T, typename Y> istream& operator >> (istream& x, pair<T,Y>& v) {x>>v.ff>>v.ss; return x;}
template <typename T> istream& operator >> (istream& x,vector<T>& v) {for(T& it:v) x>>it;return x;}
template <typename T> ostream& operator << (ostream& x,const vector<T>& v) {for(int i=0;i<(int)v.size();i++) x<<v[i]<<" ";return x;}
template <typename T> ostream& operator << (ostream& x,const set<T>& v) {for(auto it:v) x<<it<<" ";return x;}
template <typename T> ostream& operator << (ostream& x,const multiset<T>& v) {for(auto it:v) x<<it<<" ";return x;}




signed main(){
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    int tc = 0, tt = 1;

    while (tc++ < tt)
    {
        

        ll n; cin >> n;
        if(n%2){
            cout << -1 << endl;
            continue;
        }

        cout << 0 << " " << (n/2) << endl;
        cout << (n/2) << " " << 0 << endl;
        cout << 0 << " " << -(n/2) << endl;
        cout << -(n/2) << " " << 0 << endl;



        
    }

    return 0;
}
