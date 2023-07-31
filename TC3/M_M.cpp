#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0;
    string s;
    cin>>s;
    
    for (int i = 1; i < s.size(); i++) 
    {
        if(islower(s[i]))
        {
            a++;
        }
    }
    for (int i = 0; i < s.size(); i++) 
    {
        if(isupper(s[i]))
        {
            b++;
        }
    }  
    if (islower(s[0]) && a==0)
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++) 
        {
            if (isupper(s[i])) 
            {
                s[i] = tolower(s[i]);
            }
        }
        cout<<s<<endl;
    }
    else if (b == s.size())
    {
        for (int i = 0; i < s.size(); i++) 
        {
            if (isupper(s[i])) 
            {
                s[i] = tolower(s[i]);
            }
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s;
    }

    return 0;
}