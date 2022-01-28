#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        int cinl = 1;
        int height = 0;
        while(num >= cinl){
           height+=1; 
           num-=cinl;
           cinl+=1; 
        }
        cout <<height<< endl;
    }
    
}
