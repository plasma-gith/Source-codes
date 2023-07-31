#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size(), step = 0;
    sort(s.begin(),s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i+1])
            step++;
    }
    if (step % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}