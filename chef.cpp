#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t,diff,ques,i;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1;
        cin>>s2;
        ques=0;
        diff=0;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='?' || s2[i]=='?')
            {
                ques++;
            }
            else if (s1[i]!=s2[i])
            {
                diff++;
            }
        }
        cout<<diff<<" "<<diff+ques<<endl;
    }
    
    return 0;
}
