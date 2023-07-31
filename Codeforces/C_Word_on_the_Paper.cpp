#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        char a;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                cin>>a;
                if (a != '.')
                    cout<<a;
            }
        }
        cout<<endl;            
    }
    return 0;
}
