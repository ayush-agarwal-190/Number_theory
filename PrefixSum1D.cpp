#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N],l,r;
int pf[N]; 

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>arr[i];
pf[i]=pf[i-1]+arr[i];
}
cin>>l>>r;
cout<<pf[r]-pf[l-1]<<endl;
 



}