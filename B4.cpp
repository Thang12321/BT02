#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        for(int x=n-i-1;x>0;x--) cout<<' ';
        for(int j=1;j<=2*i+1;j++) cout<<'*';
        cout<<endl;
    }
}
