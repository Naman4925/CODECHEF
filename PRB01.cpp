#include<iostream>
#include<cmath>
using namespace std;

int prime(int n)
{
    if(n>1)
    {
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
    }
    else
    return 0;
}

int main()
{
    int t,n;
    cin>>t;
    
    while(t>0)
    {
        cin>>n;
        if(prime(n)==1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        t--;
    }
    return 0;
}
