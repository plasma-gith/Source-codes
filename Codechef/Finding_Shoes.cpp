#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	while (t--)
	{
	    int n, m, a, b;
	    cin>>n>>m;
	    if (n <= m)
	        cout<<n<<endl;
	    else
	        {
	            a = n * 2;
	            b = a - m;
	            cout<<b<<endl;
	        }
	}
	return 0;
}
