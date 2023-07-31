#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x[300], y;
    int l = strlen(x);
    while(cin>>x)
    {
        for(int i = 0; x[i] != '\0'; i++)
        {
            y = x[i] - 7;
            cout<<y;
        }
        cout<<endl;
    }
    return 0;
}