#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cases = 0;
    while(1)
    {
        cin>>s;
        if(s == "*")
            break;
        cout << "Case " << ++cases << ": ";
        if (s == "Hajj")
            cout<<"Hajj-e-Akbar"<<endl;
        else
            cout<<"Hajj-e-Asghar"<<endl;      
    }
}