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

    // a single diff between A and a is that 5 bit of A is unset and a is set

for(char c='A';c<='Z';c++)
{
    cout<<c<<endl;
    printBinary(int(c));
}
for(char c='a';c<='z';c++)
{
    cout<<c<<endl;
    printBinary(int(c));
}

// converting lower to upper case
char A='A';
char a=A|(1<<5);
cout<<a<<endl;

// another method
cout<<char(a&(~(1<<5)))<<endl;
// for spacee
cout<<char(1<<5)<<endl;
//another method
cout<<char('C'|' ')<<endl;
cout<<char('c'|'_')<<endl;
    return 0;
}