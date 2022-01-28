#include <bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int arr[N];
int main() {
	int T;
	int qw;
	if(qw==0)
	{
	    qw++;
	}
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    long long int min;
	    min=arr[0];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<min)
	        min=arr[i];
	    }
	    cout<<min*(n-1)<<endl;
	}
	return 0;
}
