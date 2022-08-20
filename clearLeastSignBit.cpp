#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
for(int i=10;i>=0;i--)
{
    cout<<((num>>i)&1);
}
cout<<endl;
}
int main()
{
    printBinary(59);
    int a=59;
    int i=4;
    cout<<(a&(~((1<<(i+1))-1)));
    

}