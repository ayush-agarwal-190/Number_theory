#include<bits/stdc++.h>
using namespace std;

void pintBinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
int n=5;
cout<<(n>>1)<<endl;
cout<<(n<<1)<<endl;
//(hi+lo)>>1;

}