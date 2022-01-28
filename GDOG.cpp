#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
       
        int p, i,x=0;
        for(i=1;i<=K;i++)
        {
        p = N%i;
       if(p>x)
       x=p;
        }
        cout<<x<<endl;
    }
    return 0;
}
