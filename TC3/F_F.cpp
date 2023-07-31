#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int m = 0, d = 0;
    while(t--)
    {
        char x[10];
        cin>>x;
        if (strcmp(x, "donate") == 0)
        {
            cin>>d;
            m = m + d;
        }
        else if(strcmp(x, "report") == 0)
        {
            cout<<m<<endl;
        }
    }
    
    return 0;
}