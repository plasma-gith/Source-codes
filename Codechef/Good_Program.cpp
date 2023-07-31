#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, b;
        float a, c;
        cin>>n;
        a = n / 4.0;
        b = a + 1;
        c = (float) b - a;
        if (c >= 1)
            cout<<"Good"<<endl;
        else
            cout<<"Not Good"<<endl;
    }  
    return 0;
}