#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t,i;
	cin>>t;

	for(i=0;i<t;i++)
	{
		char s[1000]; int a=0,b=0;
			cin>>s;
			for(int j=0;s[j]!='\0';j++)
			{
			
					    if(s[j]=='b')
					    {
					        b++;
					        
					    }
					    else
					    {
					        a++;
					    }
			}		    

		if(a>b)
		{
		    cout<<b<<endl;
		}
		else
		{
		    cout<<a<<endl;
		}
	}
	return 0;
}
