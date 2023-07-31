#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], m, n, o, p;
    char x[100], y[100], z[100], d[200];
    cin>>x>>y>>z;
    m = strlen(x);
    n = strlen(y);
    o = strlen(z);
    if (m + n == o)
    {
        strcpy(d, strcat(x, y));
        sort(d, d+(m+n));
        sort(z, z + o);
        p = strcmp (z, d);
        if (p == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
