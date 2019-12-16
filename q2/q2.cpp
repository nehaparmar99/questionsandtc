#include <bits/stdc++.h>
using namespace std;
int main()
{
   long int n,p;

   cin>>n;
   cin>>p;

    if(p/2<=(n/2-p/2))
    cout<<p/2;
    else
    cout<<(n/2-p/2);


    return 0;
}
