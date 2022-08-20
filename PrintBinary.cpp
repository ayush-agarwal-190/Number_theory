#include<bits/stdc++.h>
using namespace std;


void printBinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
printBinary(9);


//check for bit is set or not
int a=9;
int i=1;

if((a&(1<<i))!=0)
cout<<"setbits"<<endl;
else
cout<<"notSet"<<endl;;

//setting ith bit
printBinary(a|(1<<i));
// unset ith bit
printBinary(a&(~(1<<i)));

//Toggle bit -on off bit
printBinary(a^(1<<i));

// bit count
int count=0;
for(int i=31;i>=0;--i)
{
    if((a&(1<<i))!=0)
    {
    count++;
    }
}
cout<<count<<endl;

cout<<"buildin function"<<endl;
cout<<__builtin_popcount(a)<<endl;
cout<<__builtin_popcountll((1LL<<35)-1)<<endl;


    return 0;
}