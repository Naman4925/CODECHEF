#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
using namespace std;

void helper()
{

    string s;
    cin >> s;
    string B = s;
    reverse(all(s));
    int m = s.length(), num = B.length();
    int TIH[256];
    memset(TIH, 0, sizeof(TIH));
    for (int i = 0; i < num; i++)
        TIH[B[i]]++;
    for (int i = 0; i < num; i++)
        TIH[s[i]]--;
    int ans = 0;
    for (int i = num - 1, j = num - 1; i >= 0;)
    {
        while (i >= 0 && s[i] != B[j])
        {
            i--;
            ans++;
        }
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    cout << ans << "\n";
}

int main()
{
    // your code goes here
    long long test;
    cin >> test;

    for (long long i = 0; i < test; i++)
    {
        helper();
    }
    return 0;
}
