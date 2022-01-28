#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
long long lcm(long long int a, long long int b)
{
    long long int lcm = (a*b)/gcd(a,b);
    return lcm;
}
int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
	return 0;
}
