#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	      int m,x,y;
	      cin>>m>>x>>y;
	      int arr[m+1];
	      arr[0]=0;
	      for(int i=1;i<=m;i++)
	            cin>>arr[i];
	     int d=x*y;
	     int max,min,notsafe=0;
	     for(int i=1;i<=100;i++)
	     {
	           for(int j=1;j<=m;j++)
	           {
	                max=(arr[j]+d);
	                if(max>100)
	                  max=100;
	                min=(arr[j]-d);
	                if(min<1)
	                  min=1;
	                  if(i>=min&&i<=max)
	                      {  notsafe++;
	                              break;
	                      }
	           }
	     }
	     cout<<100-notsafe<<endl;
	}
	return 0;
}
