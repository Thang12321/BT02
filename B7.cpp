#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int n=0,x=0;
  while(n>=0)
  {
      cin>>n;

      if(n==x) continue;
      else cout<<n<<" ";
            x=n;
  }
}
