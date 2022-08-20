// numbers we can made usng 4 bits is 2^4 and maximu number is 2^n-1

//set 1
// unset 0


#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<INT_MAX<<endl;
 int a=(1LL<<31)-1;//if maximum value of integer is 32 bits then why it is not able to store 32 bit

 cout<<a<<endl;

//signed integer one bit is store for sign
//unsigned integer always positive
unsigned int b=(1LL<<32)-1;
cout<<b;


}