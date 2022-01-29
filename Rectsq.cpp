#include <bits/stdc++.h> 
using namespace std;  
#define endl "\n"
#define ll long long int
#define mod 1000000007

int gcd(int a, int b)
{
    if(b>a)
    return gcd(b,a);

    if(b==0)
    return a;

    return gcd(b,a%b);
}

int main()  
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); cout.tie(NULL); // flushes cout  
    
    //start writing below
    int t;
    cin>>t;
    while(t--)
    {
       int l,b;
       cin>>l>>b;

       int area=l*b ;
        int smallSQR=pow(gcd(l,b),2);

        cout<<area/smallSQR<<endl;
 
    }
 
    return 0;  
}
