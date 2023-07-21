#include<iostream>
using namespace std;
int main()
{
int n,t,r,reverse=0;
cout<<"Enter any number : ";
cin>>n;
t=n;
while(t>0)
{

r=t%10;
t=t/10;
reverse=reverse*10+r;

}
cout<<"Reverse of number "<<n<<" is "<<reverse;
return 0;
}