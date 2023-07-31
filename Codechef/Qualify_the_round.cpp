#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, a, b, c;
        cin>>x>>a>>b;
        
        c = a + b * 2;
        
        if (c >= x)
            cout<<"Qualify"<<endl;
        else
            cout<<"NotQualify"<<endl;
    }  
    return 0;
}