#include<bits/stdc++.h>
using namespace std;

int main()
{
    //swap using xor
    int a=4,b=6;
    a=a^b;
    b=b^a;

    cout<<a<<" "<<b<<endl;
    // given an array of n integer all integer are present in even count except 
    //one find that one integer which has odd count in o(N)time complexity
    //

    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans^=x;

    }
    cout<<ans<<endl;







}