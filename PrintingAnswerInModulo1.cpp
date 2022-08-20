// (a+b)%M=((a%M)+(b%M))%M
// (a*b)%M=((a%M)*(b%M))%M
// (a-b)%M=((a%M)-(b%M))%M
// (a/b)%M=(a%M)*(b^-1%M)%M

// ?? print answer in Module M=47;
// 10^9 +7 is very close to integer maximum


 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int M=47;
    cin>>n;
    long long fact=1;
    for(int i=2;i<=n;++i)
    {
        fact=(fact*i)%M;
    }
    cout<<fact;
}
