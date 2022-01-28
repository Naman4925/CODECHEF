#include <bits/stdc++.h>
using namespace std;

int distance(int x1 ,int y1,int x2,int y2)
{
    return (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    int count=0;
	    int x1,y1,x2,y2,x3,y3;
	    
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    
	  if(distance(x1,y1,x2,y2) <= r*r) count++;
	  if(distance(x2,y2,x3,y3) <= r*r) count++;
	  if(distance(x1,y1,x3,y3) <= r*r) count++;
	    
	    if(count >=2)
	        cout<<"yes";
	    else
	     cout<<"no";
	        
	  cout<<endl;
	}
	return 0;
}
