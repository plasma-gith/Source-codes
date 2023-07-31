#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int d = a + b;
        int e = b + c;
        int f = c + a;
        if (d >= 10 || e >= 10 || f >= 10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
