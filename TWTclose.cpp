#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,k,n;
	cin>>t>>k;
	int ary[t]={0};
	string s;
	for(int j=0;j<k;j++)
	{
	cin>>s;
	if(s=="CLOSEALL")
	{
	for(int i=0;i<t;i++)
	{
	       ary[i]=0;
	}
	}
	else
	{
	     cin>>n;
	     if(ary[n-1]==1)
	     ary[n-1]=0;
	     else
	     ary[n-1]=1;
	}
	int sum=0;
	for(int l=0;l<t;l++)
	{
	     sum=sum+ary[l];
	}
	cout<<sum<<endl;
	}
	return 0;
}
