#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int n,dem=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
           for(int x=1+dem;x<=n;x++) cout<<x<<' ';
           for(int j=1;j<1+dem;j++) cout<<j<<' ';
           cout<<endl;
           dem++;
    }
}
