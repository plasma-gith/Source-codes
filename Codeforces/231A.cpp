#include <iostream>
using namespace std;

int main()
{
    int t, step = 0;
    cin>>t;

    while (t--)
    {
        int a, b, c, z;
        cin>>a>>b>>c;

        z = a + b + c;

        if (z >= 2)
            step = step + 1;
    }
    cout<<step<<endl;
    return 0;
}
