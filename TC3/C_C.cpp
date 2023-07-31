#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size(), temp = 0, diff, max = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            diff = 1;
        }
        else
        {
            diff++;
        }
        if (diff > max)
            max = diff;
    }
    cout<<max<<endl;
    return 0;
}