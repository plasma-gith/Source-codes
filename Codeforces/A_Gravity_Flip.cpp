#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int s[x];
    
    int i = 0;
    while (i < x)
    {
        cin>>s[i];
        i++;
    }

    sort(s, s+x);

    for(int i = 0; i < x; i++)
    {
        cout<<s[i]<<" ";
    }   
    return 0;
}