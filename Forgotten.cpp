#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    map<string, int>countword;
	    int noofwords,phrases;
	    cin>>noofwords>>phrases;
	    string words[noofwords];
	    for(int i=0;i<noofwords;i++)
	    {
	        cin>>words[i];
	    }
	    while(phrases--)
	    {
	        int phraselen;
	        cin>>phraselen;
	        while(phraselen--)
	        {
	            string phraseword;
	            cin>>phraseword;
	            countword[phraseword]++;
	        }
	    }
	    for(int i=0;i<noofwords;i++)
	    {
	        if(countword[words[i]]>=1)
	        {
	            cout<<"YES"<<" ";
	        }
	        else
	            cout<<"NO"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
