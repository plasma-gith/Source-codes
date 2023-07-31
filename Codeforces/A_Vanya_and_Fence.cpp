#include <iostream>
using namespace std;

int main()
{
    int  n, h, sum=0;
    cin>>n>>h;
    while(n--)
    {
        int a;
        cin>>a;

        if (a > h)
            sum = sum + 2;
        else
            sum = sum + 1;
    }
    cout<<sum<<endl;
    return 0;
}

