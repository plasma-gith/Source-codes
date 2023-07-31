#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string p;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size(), step = 0, max = 0, i;
        sort(s.begin(),s.end());
        for(i = 0; i < n; i++)
        {
            if (s[i] != s[i+1])
                step++;
                temp = i;
        }
        if (max >= step)
            max = step;
        
    }
}