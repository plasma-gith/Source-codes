#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, s;
        cin>>x;
        s = x % 3;
        if (x % 3 == 0)
            cout<<0<<endl;
        else
            cout<<3-s<<endl;

    }  
    return 0;
}