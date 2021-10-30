#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    vector<int> v;
	    int s = pow(2, n);
	    for(int i = 0; i <s; i++)
	    {
	        int x;
	        cin >> x;
	        v.push_back(x);
	    }
	    int min = *min_element(v.begin(), v.end());
	    int max = *max_element(v.begin(), v.end());
	    if (max - min <= 1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
