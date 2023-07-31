#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '"')
            s[i] = '`';
        i++;
    }
    cout<<s<<endl;
    return 0;
}