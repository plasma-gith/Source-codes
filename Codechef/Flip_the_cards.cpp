#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, x;
        cin>>n>>x;
        int a = abs(n-x);
        int b = min(a, x);
        cout<<b<<endl;
    }
    return 0;
}