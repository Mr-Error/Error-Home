//power.cpp---function for power
#include <iostream>

using namespace std;

long power(int,int);

int main()
{
   cout<<"Enter two numbers(int):";
   int a,n;
   cin>>a>>n;
   long res=power(a,n);
   cout<<endl<<res<<endl;
   return 0;
}

long power(int a,int n)
{
   long res(1);
   for (int i=1;i<=n;i++)
      res*=a;
   return res;
}
